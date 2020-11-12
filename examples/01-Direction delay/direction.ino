#include <Arduino.h>
#include <vector>
#include <WiFi.h>
#include <Wire.h>
#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_LEDBackpack.h"

#include <Ecamp.h>

  ECamp ECamp;

#include "KB_initBoard.h"
#include "KB_music.h"
#include "KB_LDR.h"
#include "KB_LM73.h"
#include "KB_ht16k33.h"
#include "MCP7941x.h"

MCP7941x rtc = MCP7941x();

KB_board board = KB_board();
KB_music music = KB_music();
KB_LDR ldr = KB_LDR();
KB_LM73 lm73 = KB_LM73();
KB_8x16Matrix matrix = KB_8x16Matrix();

typedef int Number;
typedef int Boolean;
using namespace std;






void setup()
{
  board.begin();
  music.begin();
  lm73.begin();
  matrix.displayBegin();
  ldr.begin();
  
  ECamp.motorABegin();

  ECamp.motorBBegin();
}
void loop()
{
    ECamp.motorAConfig(String("Forward"), 255);
  ECamp.motorBConfig(String("Forward"), 255);
  delay(2000);
  ECamp.motorAConfig(String("forward"), 190);
  ECamp.motorBConfig(String("forward"), 190);
  delay(2000);
  ECamp.motorAConfig(String("break"), 0);
  ECamp.motorBConfig(String("break"), 0);
  delay(2000);
  ECamp.motorAConfig(String("Backward"), 255);
  ECamp.motorBConfig(String("Backward"), 255);
  delay(2000);
  ECamp.motorAConfig(String("backward"), 190);
  ECamp.motorBConfig(String("backward"), 190);
  delay(2000);
  ECamp.motorAConfig(String("Break"), 250);
  ECamp.motorBConfig(String("Break"), 250);
  delay(2000);

  
}