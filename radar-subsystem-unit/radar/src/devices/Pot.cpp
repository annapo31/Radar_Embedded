#include "Pot.h"
#include "Arduino.h"

Pot::Pot(int pin){
  this->pin = pin;
} 
  
void Pot::sync(){
  value = analogRead(pin);  
  updateSyncTime(millis());
}

float Pot::getValue(){
  return value / 1023.0;
}

void Pot::updateSyncTime(long time){
	lastTimeSync = time;
}

long Pot::getLastSyncTime(){
	return lastTimeSync;
}
