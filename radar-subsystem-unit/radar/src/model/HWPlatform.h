#ifndef __HW_PLATFORM__
#define __HW_PLATFORM__

#include "config.h"
#include "devices/Button.h"
#include "devices/Led.h"
#include "devices/ServoMotor.h"
#include "kernel/Logger.h"
#include "devices/Pot.h"
#include "LiquidCrystal_I2C.h"
#include "devices/Pir.h"
#include "devices/TempSensorTMP36.h"

class HWPlatform {

public:
  HWPlatform();
  void init();
  void test();

  Button* getButtonStart();
  Button* getButtonReset();
  Button* getButtonStop();
  Led*  getLedGreen();
  Led*  getLedRed();
  ServoMotor* getMotor();
  Pir* getPir();
  TempSensorTMP36* getTempSensor();
  LiquidCrystal_I2C* getLCD();
  Pot* getPot();

private:
  Button* pButtonStart;
  Button* pButtonReset;
  Button* pButtonStop;
  Led* pLedGreen;
  Led* pLedRed;
  ServoMotor* pMotor;
  Pot* pPot;
  Pir* pPir;
  TempSensorTMP36* pTemp;
  LiquidCrystal_I2C* lcd;
};

#endif
