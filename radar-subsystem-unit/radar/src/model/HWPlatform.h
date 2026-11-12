#ifndef __HW_PLATFORM__
#define __HW_PLATFORM__

#include "config.h"
#include "devices/Button.h"
#include "devices/Led.h"
#include "devices/ServoMotor.h"

// Hardware component used in the project, we can test them (directory test)

class HWPlatform {

public:
  HWPlatform();
  void init();
  void test();

  Button* getButton();
  Led*  getLed();
  ServoMotor* getMotor();

private:
  Button* pButton;
  Led* pLed;
  ServoMotor* pMotor;
  
};

#endif
