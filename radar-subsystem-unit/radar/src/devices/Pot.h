#ifndef __POT__
#define __POT__

class Pot {
 
public: 
  Pot(int pin);
  
  float getValue();

  virtual void sync();
  long getLastSyncTime();

protected: 
  void updateSyncTime(long time);

private:
  long lastTimeSync;
  int pin;
  float value;
};

#endif
