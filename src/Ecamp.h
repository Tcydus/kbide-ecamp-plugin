/******************************************************************
 * Blink plugin library for KB-IDE by chiang mai maker club
 ******************************************************************/

#ifndef ecamp_h
#define ecamp_h

#include <Arduino.h>


#if ARDUINO < 100
  #include <WProgram.h>
#else
  #include <Arduino.h>
#endif

class BLINK
{
public:
  BLINK();
  ~BLINK();
  void motorABegin();
  void motorAConfig(String direction,uint8_t speed);
  void motorBBegin();
  void motorBConfig(String direction,uint8_t speed);
  void setPWM(uint8_t pin,uint8_t value) ;

protected:
private:
};

#endif /*ecamp_h*/
