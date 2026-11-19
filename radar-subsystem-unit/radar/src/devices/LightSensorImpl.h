#include "LightSensor.h"

// Maybe not useful

class LightSensorImpl: public LightSensor {

public: 
  LightSensorImpl(int pin);
  double getLightIntensity();
  
private:
  int pin;
};
