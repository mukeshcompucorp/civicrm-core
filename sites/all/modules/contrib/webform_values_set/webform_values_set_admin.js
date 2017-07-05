(function ($) {
    Drupal.behaviors.webform_values_set_admin = {
        attach: function(context, settings) {
            $(function() {
                $('.webform-values-set-webform-select select:first').bind('change', function() {
                    if ($(this).val() === '') {
                        return false;
                    }
                    var fields = ['trigger-field', 'value-a-field', 'value-b-field'];
                    var jFields = [];
                    for (i in fields) {
                        jFields[fields[i]] = $('.webform-values-set-' + fields[i] + '-select select:first');
                        jFields[fields[i]].html('');
                    }
                    var selected_webform = $(this).val();
                    $.each(webforms_fields[selected_webform], function(key, value) {
                        for (i in jFields) {
                            jFields[i].append($("<option></option>").attr("value", key).text(value));
                        }
                    });
                });
            });
        }
    };
})(jQuery);