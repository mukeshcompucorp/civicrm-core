
  {foreach from=$elementNames item=elementName}
    <div class="crm-section">
      <div class="label" style="float:none; text-align:left; width:auto;">{$form.$elementName.label}</div>
      <div class="content" style="margin-left: 0;">{$form.$elementName.html}</div>
      <div class="clear"></div>
    </div>
  {/foreach}

  <div class="crm-submit-buttons">
    {include file="CRM/common/formButtons.tpl" location="bottom"}
  </div>


  <div style="margin-top: 40px;">Copy HTML to CiviCRM</div>


<div style="border: 1px solid; padding: 10px; margin: 5px 0 20px;">Copy (ctrc+c - Windows or cmd+c - Mac) the text below and paste (ctrl+v - Windows or cmd+v - Mac) into CiviCRM mailing
    editor after clicking the "source" button</div>

{if isset($convertedTemplate)}
  <textarea rows="4" cols="50" style="width: 100%; height: 300px;">{$convertedTemplate}</textarea>
{else}
    <textarea rows="4" cols="50"style="width: 100%; height: 300px;"></textarea>
{/if}