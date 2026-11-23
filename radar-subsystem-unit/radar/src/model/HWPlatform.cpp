#include "HWPlatform.h"
#include <Arduino.h>
#include "devices/ButtonImpl.h"
#include "kernel/MsgService.h"
#include "config.h"
#include "devices/Led.h"
#include "devices/ServoMotorImpl.h"
#include "kernel/Logger.h"
#include "devices/Pot.h"
#include "LiquidCrystal_I2C.h"
#include "devices/Pir.h"
#include "devices/TempSensorTMP36.h"

void wakeUp(){}

HWPlatform::HWPlatform(){
  pButtonStart = new ButtonImpl(BT_START_PIN);
  pButtonReset = new ButtonImpl(BT_RESET_PIN);
  pButtonStop = new ButtonImpl(BT_STOP_PIN);
  pLedGreen = new Led(LED_GREEN_PIN);
  pLedRed = new Led(LED_RED_PIN);
  pMotor = new ServoMotorImpl(MOTOR_PIN);
  pPot = new Pot(POT_PIN);
  lcd = new LiquidCrystal_I2C(0x27, 20, 4);
  pPir = new Pir(TRIG_PIN); // To be checked
  pTemp = new TempSensorTMP36(TEMP_PIN);
}


void HWPlatform::init(){
}

Button* HWPlatform::getButtonStart(){
  return this->pButtonStart;
}

Button* HWPlatform::getButtonReset(){
  return this->pButtonReset;
}

Button* HWPlatform::getButtonStop(){
  return this->pButtonStop;
}


Led*  HWPlatform::getLedGreen(){
  return this->pLedGreen;
}

Led*  HWPlatform::getLedRed(){
  return this->pLedRed;
}

ServoMotor* HWPlatform::getMotor(){
  return this->pMotor;
}

Pir* HWPlatform::getPir(){
  return this->pPir;
}

TempSensorTMP36* HWPlatform::getTempSensor(){
  return this->pTemp;
}

LiquidCrystal_I2C* HWPlatform::getLCD(){
  return this->lcd;
}

Pot* HWPlatform::getPot(){
  return this->pPot;
}

void HWPlatform::test(){
  /*
  bool btPressed = pButton->isPressed();
  pLed->switchOn();
  pMotor->on();
  pMotor->setPosition(90);
  Logger.log("Button: " + String(btPressed ? "pressed" : " not pressed"));
  delay(1000);
  pMotor->setPosition(0);
  delay(1000);
  pMotor->off();
  pLed->switchOff();
  */
}

