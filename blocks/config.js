module.exports = [
    {
        name: "E-camp kidbright shield",
        blocks: [
            {
                xml: `<sep gap="32"></sep><label text="Plugin for E-camp kidbright shield" web-class="headline"></label>`
            },
            {
              xml: `<sep gap="32"></sep><label text="Setup" web-class="headline"></label>`
            },
            "motor_setup",
            "m1_begin",
            "m2_begin",
            {
                xml: `<sep gap="32"></sep><label text="Command" web-class="headline"></label>`
            },
            {
              xml:
              `<block type="m1_config">
                <value name="PWM Speed">
                  <block type="math_number">
                    <field name="VALUE">0</field>
                  </block>
                </value>
              </block>
              `
            },
  
            {
              xml:
              `<block type="m2_config">
                <value name="PWM Speed">
                  <block type="math_number">
                    <field name="VALUE">0</field>
                  </block>
                </value>
              </block>
              `
            }
            
        ]
    }
];