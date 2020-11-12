Blockly.Blocks['gpio_setup'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("Pin setup")
        .appendField(new Blockly.FieldTextInput("13"), "PIN")
        .appendField("to")
        .appendField(new Blockly.FieldDropdown([
            ["OUTPUT","OUTPUT"], 
            ["INPUT","INPUT"], 
            ["INPUT_PULLUP","INPUT_PULLUP"]
            ]), "MODE");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(120);
    this.setTooltip("");
    this.setHelpUrl("");
  }
};

Blockly.Blocks['gpio_led_blink'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("Blink pin")
        .appendField(new Blockly.FieldTextInput("13"), "PIN")
        .appendField("every")
        .appendField(new Blockly.FieldNumber(1000), "DELAY")
        .appendField("ms");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(120);
    this.setTooltip("");
    this.setHelpUrl("");
    }
};