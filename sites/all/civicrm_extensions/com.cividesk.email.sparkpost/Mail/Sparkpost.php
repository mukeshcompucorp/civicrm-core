<?php
/**
 * This extension allows CiviCRM to send emails and process bounces through
 * the SparkPost service.
 *
 * Copyright (c) 2016 IT Bliss, LLC
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Support: https://github.com/cividesk/com.cividesk.email.sparkpost/issues
 * Contact: info@cividesk.com
 */

/**
 * Outbound mailer class which calls the SparkPost APIs (SMTP with TLS does not work)
 * @see packages/Mail/smtp.php
 */

require_once 'Mail/RFC822.php';

class Mail_Sparkpost extends Mail {
  /**
   * Send an email
   */
  function send($recipients, $headers, $body) {
    if (defined('CIVICRM_MAIL_LOG')) {
      CRM_Utils_Mail::logger($recipients, $headers, $body);
      if(!defined('CIVICRM_MAIL_LOG_AND SEND')) {
        return true;
      }
    }

    // Sanitize and prepare headers for transmission
    if (!is_array($headers)) {
      return PEAR::raiseError('$headers must be an array');
    }
    $this->_sanitizeHeaders($headers);
    $headerElements = $this->prepareHeaders($headers);
    if (is_a($headerElements, 'PEAR_Error')) {
      return $headerElements;
    }
    list($from, $textHeaders) = $headerElements;

    $request_body = array(
      'options' => array(
        'open_tracking' => FALSE,  // This will be done by CiviCRM
        'click_tracking' => FALSE, // ditto
      ),
      'recipients' => array(),
    );
    if (CRM_Utils_Array::value('X-CiviMail-Bounce', $headers)) {
      // Insert CiviMail header in the outgoing email's metadata
      $request_body['metadata'] = array('X-CiviMail-Bounce' => CRM_Utils_Array::value("X-CiviMail-Bounce", $headers));
    } else {
      // Mark the email as transactional for SparkPost
      $request_body['options']['transactional'] = true;
    }

    // Capture the recipients
    $request_body['recipients'] = $this->formatRecipients($recipients);

    // Construct the rfc822 encapsulated email
    $request_body['content'] = array(
      'email_rfc822' => $textHeaders . "\r\n\r\n" . $body,
    );

    try {
      $result = CRM_Sparkpost::call('transmissions', array(), $request_body);
    } catch (Exception $e) {
      return new PEAR_Error($e->getMessage());
    }
    return $result;
  }

  /**
   * Prepares a recipient list in the format SparkPost expects.
   *
   * @param mixed $recipients
   *   List of recipients, either as a string or an array.
   *   @see Mail->send().
   * @return array
   *   An array of recipients in the format that the SparkPost API expects.
   */
  function formatRecipients($recipients) {
    // CiviCRM passes the recipients as an array of string, each string potentially containing
    // multiple addresses in either abbreviated or full RFC822 format, e.g.
    // $recipients:
    //   [0] nicolas@cividesk.com, Nicolas Ganivet <nicolas@cividesk.com>
    //   [1] "Ganivet, Nicolas" <nicolas@cividesk.com>
    //   [2] ""<nicolas@cividesk.com>,<nicolas@cividesk.com>
    // [0] are the most common cases, [1] note the , inside the quoted name, [2] are edge cases
    // cf. CRM_Utils_Mail::send() lines 161, 171 and 174 (assignments to the $to variable)
    if (!is_array($recipients)) {
      $recipients = array($recipients);
    }
    $result = array();

    foreach ($recipients as $recipientString) {
      // Best is to use the PEAR::Mail package to decapsulate as they have a class just for that!
      $matches = Mail_RFC822::parseAddressList($recipientString);

      foreach ($matches as $match) {
        $address = array();
        if (!empty($match->mailbox) && !empty($match->host)) {
          $address['email'] =  $match->mailbox . '@' . $match->host;
        }
        if (!empty($match->personal)) {
          if ((substr($match->personal, 0, 1) == '"') && (substr($match->personal, -1) == '"')) {
            $address['name'] = substr($match->personal, 1, -1);
          } else {
            $address['name'] = $match->personal;
          }
        }
        if (!empty($address['email'])) {
          $result[] = array('address' => $address);
        }
      }
    }

    return $result;
  }
}
