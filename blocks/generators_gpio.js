Blockly.JavaScript['gpio_setup'] = function(block) {
  var text_pin = block.getFieldValue('PIN');
  var dropdown_mode = block.getFieldValue('MODE');

  var code = 
`
#EXTINC#include <Blink.h>#END
#VARIABLEBLINK gpio;#END
gpio.begin(${text_pin}, "${dropdown_mode}");
\n
`;
  return code;
};

Blockly.JavaScript['gpio_led_blink'] = function(block) {
  var text_pin = block.getFieldValue('PIN');
  var value_delay = block.getFieldValue('DELAY');
  var code = `gpio.blink(${text_pin}, ${value_delay});\n`;
  return code;
};