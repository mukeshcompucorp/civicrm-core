cj( document ).ready(function() {
  cj(".editrow_custom_8-section > .content").each(function() {
        var radios = cj(this).find(":radio");
        cj(this).find(":radio").parent().hide();
        var sliderMin = parseInt(radios.first().val(), 10);
        var sliderMax = parseInt(radios.last().val(), 10);

        var defaultRadio = cj(this).find(":radio:checked");
        if(typeof defaultRadio[0] != 'undefined'){
                var defaultValue = 100/(sliderMax-1)*(cj(defaultRadio[0]).val()-1);
                var defaultLabel = cj('label[for="'+cj(defaultRadio[0]).attr('id')+'"]').html();
        }else{
                var defaultValue = 50;
                radios.filter("[value=" + Math.round(sliderMax/2) + "]").click();
                var defaultLabel = cj('label[for="'+cj(radios[Math.round(sliderMax/2)-1]).attr("id")+'"]').html();
        }
        var sliderTest = cj('<div id="eventvisitfrequency" class="sglide" snap></div>');
        var sliderResult = cj('<div id="eventvisitfrequencyresult">'+defaultLabel+'</div>');
        sliderTest.appendTo(this);
        sliderResult.appendTo(this);

        cj("#eventvisitfrequency").sGlide({
                        startAt : defaultValue,
                        pill    : false,
                        totalRange: [sliderMin, sliderMax],
                        colorShift      : ['#0A0A0A', '#0A0A0A'],
                        height: 20,
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
                var resultLabel = cj('label[for="'+cj(radios[pct-1]).attr("id")+'"]').html();
                cj('#eventvisitfrequencyresult').html(resultLabel);
        }

  });
});
