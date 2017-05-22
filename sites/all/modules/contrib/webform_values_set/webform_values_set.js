var webform_values_set_triggered = {};

function webform_values_set_trigger(sets, $ob, formSelector) {
    var id = $ob.attr('name');
    var value = $ob.val();
    if (typeof webform_values_set_triggered[formSelector + id] === 'undefined') {
        webform_values_set_triggered[formSelector + id] = {
            triggered: false,
            fields: []
        };
    }

    if (webform_values_set_triggered[formSelector + id].triggered) {
        var triggeredFields = webform_values_set_triggered[formSelector + id].fields;
        for (var i in triggeredFields) {
            var $reset = jQuery(formSelector + '*[name=\'' + triggeredFields[i] + '\']');
            $reset.each(function() {
                if (jQuery(this).attr('type') === 'radio' || jQuery(this).attr('type') === 'checkbox') {
                    jQuery(formSelector + '*[name=\'' + triggeredFields[i] + '\']').attr('checked', false);
                } else {
                    jQuery(formSelector + '*[name=\'' + triggeredFields[i] + '\']').val('');
                }
                jQuery(formSelector + '*[name=\'' + triggeredFields[i] + '\']').attr('disabled', false);
            });
        }
        webform_values_set_triggered[formSelector + id].triggered = true;
    }
    if (typeof sets[id]['pairs'][value] === "undefined") {
        return false;
    }
    var triggeredFields = [];
    for (var i in sets[id]['pairs'][value]) {
        for (var j in sets[id]['pairs'][value][i]) {
            jQuery(formSelector + '*[name=\'' + j + '\']').val([sets[id]['pairs'][value][i][j]]);
            triggeredFields.push(j);
            if (sets[id]['is_secure']) {
                jQuery(formSelector + '*[name=\'' + j + '\']').attr('disabled', true);
            }
        }
    }
    webform_values_set_triggered[formSelector + id].fields = triggeredFields;
    webform_values_set_triggered[formSelector + id].triggered = true;
}
