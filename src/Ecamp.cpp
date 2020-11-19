/******************************************************************
 * ECamp plugin library for KB-IDE by chiang mai maker club
 *****************************************************************/

#include "Ecamp.h"

ECamp::ECamp() {}
ECamp::~ECamp() {}

uint8_t ECamp::getPWMTimer(uint8_t pin){
  uint8_t pwmChannel = 0;
  pin == 18 ? pwmChannel = 0 : 
    pin == 19 ? pwmChannel = 1 :
       pin == 26 ? pwmChannel = 4 : 
        pin == 27 ? pwmChannel = 5 :
          pwmChannel = 6;
  return pwmChannel;
}
void ECamp::PWMInit(uint8_t pin){
  const uint16_t freq = 5000; 
  const uint8_t resolution = 8;
  uint8_t pwmChannel = getPWMTimer(pin);

  ledcSetup(pwmChannel, freq, resolution);
  ledcAttachPin(pin, pwmChannel);
}

void ECamp::motorABegin(String mode) {
  PWMInit(18);
  PWMInit(19);
  setPWMValue(18,0);
  setPWMValue(19,0);
  mode == "invert" ? motor_a_invert = true :   
    motor_a_invert = false;
  
  
}

void ECamp::motorBBegin(String mode) {
  PWMInit(26);
  PWMInit(27);
  setPWMValue(26,255);
  setPWMValue(27,255);
  mode == "invert" ? motor_b_invert = true :   
    motor_b_invert = false;
}

void ECamp::setPWMValue(uint8_t pin,uint8_t value){

  uint8_t pwmChannel = getPWMTimer(pin);
  ledcWrite(pwmChannel, value);

}

String ECamp::directionConfig(String direction,bool invert){
  direction.toLowerCase();
  if(direction == "forward"){
    invert ? direction = "backward" : direction = "forward"; 
  } 
  else if(direction == "backward"){
    invert ? direction = "forward" : direction = "backward"; 
  } 
  return direction;
}


void ECamp::motorAConfig(String direction,uint8_t speed){
  // direction.toLowerCase();
  direction = directionConfig(direction,motor_a_invert);
  
  if(direction == "forward"){
    setPWMValue(18,0);
    setPWMValue(19,speed);
  }
  else if(direction == "backward"){
    setPWMValue(18,speed);
    setPWMValue(19,0);
  }
  else {
    setPWMValue(18,0);
    setPWMValue(19,0);
  }
}

void ECamp::motorBConfig(String direction,uint8_t speed){
  // direction.toLowerCase();
  direction = directionConfig(direction,motor_b_invert);

  if(direction == "forward"){
    setPWMValue(26,255);
    setPWMValue(27,255-speed);
  }
  else if(direction == "backward"){
    setPWMValue(26,255-speed);
    setPWMValue(27,255);
  }
  else {
    setPWMValue(26,255);
    setPWMValue(27,255);
  }
}