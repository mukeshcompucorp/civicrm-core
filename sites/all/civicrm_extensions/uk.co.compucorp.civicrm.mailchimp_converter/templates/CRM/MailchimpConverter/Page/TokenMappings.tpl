<table>
    <thead>
        <tr>
            <th>Mailchimp Token</th>
            <th>CiviCRM Token</th>
            <th>Actions</th>
        </tr>
    </thead>
    <tbody>
        {foreach from=$tokenMappings item=token}
            <tr>
                <td>{$token.mailchimp_token}</td>
                <td>{$token.civicrm_token}</td>
                <td><a href="{crmURL p='civicrm/mailchimp/removemapping' q="reset=1&mid=`$token.id`"}">Remove</a></td>
            </tr>
        {/foreach}
    </tbody>
</table>
<a href="{crmURL p='civicrm/mailchimp/addmapping' q="reset=1"}" class="button">
    <span>
        <div class="icon ui-icon-circle-plus"></div>
        Add mapping
    </span>
</a>
