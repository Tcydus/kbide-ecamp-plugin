
Blockly.Blocks['m1_begin'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("M1 begin");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(270);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['m2_begin'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("M2 begin");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(270);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['m1_config'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("M1 start with :");
    this.appendValueInput("direction")
        .setCheck("String")
        .appendField("direction");
    this.appendValueInput("PWM Speed")
        .setCheck("Number")
        .appendField("PWM speed");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(270);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['m2_config'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("M2 start with :");
    this.appendValueInput("direction")
        .setCheck("String")
        .appendField("direction");
    this.appendValueInput("PWM Speed")
        .setCheck("Number")
        .appendField("PWM speed");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(270);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};