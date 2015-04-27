{literal}
<script>
cj(".editrow_custom_8-section > .content").each(function() {
    var radios = cj(this).find(":radio");
    cj(radios).parent().hide();
    cj("<div></div>").slider({
      min: parseInt(radios.first().val(), 10),
      max: parseInt(radios.last().val(), 10),
      slide: function(event, ui) {
        radios.filter("[value=" + ui.value + "]").click();
      }
    }).slider("pips", {
      labels: { first: "I must see a visual art exhibition at least once a month", last: "I feel good if I've seen an art exhibition about once a year or so" }
    }).appendTo(this);
});
</script>
{/literal}
