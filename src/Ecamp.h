/******************************************************************
 * Motor plugin library for KB-IDE by technical E-camp
 ******************************************************************/

#ifndef Ecamp_h
#define Ecamp_h

#include <Arduino.h>


#if ARDUINO < 100
  #include <WProgram.h>
#else
  #include <Arduino.h>
#endif

class ECamp
{
public:
  ECamp();
  ~ECamp();
  void motorABegin();
  void motorAConfig(String direction,uint8_t speed);
  void motorBBegin();
  void motorBConfig(String direction,uint8_t speed);
  void setPWMValue(uint8_t pin,uint8_t value) ;
  void PWMInit(uint8_t pin);
  uint8_t getPWMTimer(uint8_t pin);

protected:
private:
};

#endif /*ECamp_h*/
