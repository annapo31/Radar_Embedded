#ifndef __CONTEXT__
#define __CONTEXT__

class Context {

public:
  Context();

  void setInIdle();
  void setButtonStart();
  void setButtonStop();
  void setButtonReset();
  void setDetection();
  void setDetectionNear();

  bool isInIdle();  
  bool isButtonStartPressed();
  bool isButtonStopPressed();
  bool isButtonResetPressed();
  bool isDetectionNear();
  bool isDetection();

private:

  void reset();

  bool idle;
  bool buttonStart;
  bool buttonStop;
  bool buttonReset;
  bool detectionNear;
  bool detection;

};

#endif
