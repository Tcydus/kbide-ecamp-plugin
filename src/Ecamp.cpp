/******************************************************************
 * ECamp plugin library for KB-IDE by chiang mai maker club
 *****************************************************************/

#include "Ecamp.h"

ECamp::ECamp() {}
ECamp::~ECamp() {}

void ECamp::motorABegin() {
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  setPWM(18,0);
  setPWM(19,0);
}

void ECamp::motorBBegin() {
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  setPWM(26,255);
  setPWM(27,255);
}

void ECamp::setPWM(uint8_t pin,uint8_t value){
  const uint16_t freq = 5000; 
  const uint8_t resolution = 8;
  uint8_t pwmChannel = 0;
  pin == 18 ? pwmChannel = 0 : 
    pin == 19 ? pwmChannel = 1 :
       pin == 26 ? pwmChannel = 4 : 
        pin == 27 ? pwmChannel = 5 :
          pwmChannel = 6;

  ledcSetup(pwmChannel, freq, resolution);
  ledcAttachPin(pin, pwmChannel);
  ledcWrite(pwmChannel, value);

}

void ECamp::motorAConfig(String direction,uint8_t speed){
  direction.toLowerCase();
  if(direction == "forward"){
    setPWM(18,0);
    setPWM(19,speed);
  }
  else if(direction == "backward"){
    setPWM(18,speed);
    setPWM(19,0);
  }
  else {
    setPWM(18,0);
    setPWM(19,0);
  }
}

void ECamp::motorBConfig(String direction,uint8_t speed){
  direction.toLowerCase();
  if(direction == "forward"){
    setPWM(26,255);
    setPWM(27,255-speed);
  }
  else if(direction == "backward"){
    setPWM(26,255-speed);
    setPWM(27,255);
  }
  else {
    setPWM(26,255);
    setPWM(27,255);
  }
}