Blockly.JavaScript['m1_begin'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = `#EXTINC#include <Ecamp.h>#END
  #VARIABLEBLINK ECamp;#END
  ECamp.motorABegin();
  \n`;
  return code;
};

Blockly.JavaScript['m1_config'] = function(block) {
  var value_direction = Blockly.JavaScript.valueToCode(block, 'direction', Blockly.JavaScript.ORDER_ATOMIC);
  var value_pwm_speed = Blockly.JavaScript.valueToCode(block, 'PWM Speed', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = `ECamp.motorAConfig(${value_direction}, ${value_pwm_speed});\n`;
  return code;
};

Blockly.JavaScript['m2_begin'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = `ECamp.motorBBegin();
  \n`;
  return code;
};

Blockly.JavaScript['m2_config'] = function(block) {
  var value_direction = Blockly.JavaScript.valueToCode(block, 'direction', Blockly.JavaScript.ORDER_ATOMIC);
  var value_pwm_speed = Blockly.JavaScript.valueToCode(block, 'PWM Speed', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = `ECamp.motorBConfig(${value_direction}, ${value_pwm_speed});\n`;
  return code;
};

