(function($) {
Drupal.behaviors.tpg_form_slider = {
attach: function (context, settings) {
$(".webform-component--civicrm-1-contact-1-fieldset-fieldset--civicrm-1-contact-1-cg5-custom-8").each(function() {
        var radios = $(this).find(":radio");
        $(this).find(":radio").parent().hide();
        var sliderMin = parseInt(radios.first().val(), 10);
        var sliderMax = parseInt(radios.last().val(), 10);

        var defaultRadio = $(this).find(":radio:checked");
        if(typeof defaultRadio[0] != 'undefined'){
                var defaultValue = 100/(sliderMax-1)*($(defaultRadio[0]).val()-1);
                var defaultLabel = $('label[for="'+$(defaultRadio[0]).attr('id')+'"]').html();
        }else{
                var defaultValue = 50;
                radios.filter("[value=" + Math.round(sliderMax/2) + "]").click();
                var defaultLabel = $('label[for="'+$(radios[Math.round(sliderMax/2)-1]).attr("id")+'"]').html();
        }
        var sliderTest = $('<div id="eventvisitfrequency" class="sglide" snap></div>');
        var sliderResult = $('<div id="eventvisitfrequencyresult" class="sglide-result" >'+defaultLabel+'</div>');
        sliderTest.appendTo(this);
        sliderResult.appendTo(this);

        $("#eventvisitfrequency").sGlide({
                        startAt : defaultValue,
                        pill    : false,
                        totalRange: [sliderMin, sliderMax],
                        colorShift      : ['#0A0A0A', '#0A0A0A'],
                        height: 26,
                        snap    : {
                                        points  : sliderMax,
                                        markers : true,
                                        type    : 'hard'

                        },
                        drag            : displayResult,
                        onButton        : displayResult
        });

        function displayResult(o){
                var pct = Math.round(o.custom);
                radios.filter("[value=" + pct + "]").click();
		var resultLabel = $('label[for="'+$(radios[pct-1]).attr("id")+'"]').html();
                $('#eventvisitfrequencyresult').html(resultLabel);
        }
});

}}})(jQuery);
