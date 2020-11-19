Blockly.JavaScript['motor_setup'] = function(block) {
  // var code = `#EXTINC
  // #include <Ecamp.h>
  // \nECamp ECamp;
  // #END;\n`;
  var code =  `#EXTINC#include "Ecamp.h"#END
  #VARIABLE ECamp ECamp;#END`;
  return code;
};

Blockly.JavaScript['m1_begin'] = function(block) {
  var dropdown_mode = block.getFieldValue('MODE');
  var code = `ECamp.motorABegin(String("${dropdown_mode}"));\n`;
  return code;
};

Blockly.JavaScript['m1_config'] = function(block) {
  var value_direction = Blockly.JavaScript.valueToCode(block, 'direction', Blockly.JavaScript.ORDER_ATOMIC);
  var value_pwm_speed = Blockly.JavaScript.valueToCode(block, 'PWM Speed', Blockly.JavaScript.ORDER_ATOMIC);

  var code = `ECamp.motorAConfig(${value_direction}, ${value_pwm_speed});\n`;
  return code;
};



Blockly.JavaScript['m2_begin'] = function(block) {
  var dropdown_mode = block.getFieldValue('MODE');
  var code = `ECamp.motorBBegin(String("${dropdown_mode}"));\n`;
  return code;
};

Blockly.JavaScript['m2_config'] = function(block) {
  var value_direction = Blockly.JavaScript.valueToCode(block, 'direction', Blockly.JavaScript.ORDER_ATOMIC);
  var value_pwm_speed = Blockly.JavaScript.valueToCode(block, 'PWM Speed', Blockly.JavaScript.ORDER_ATOMIC);
  var code = `ECamp.motorBConfig(${value_direction}, ${value_pwm_speed});\n`;
  return code;
};

