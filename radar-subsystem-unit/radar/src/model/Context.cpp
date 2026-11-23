#include "Context.h"

Context::Context() {
  idle = false;
  buttonStart = false;
  buttonStop = false;
  buttonReset = false;
  detectionNear = false;
  detection = false;
}

bool Context::isInIdle() {
  return idle;
}

bool Context::isButtonStartPressed() {
  return buttonStart;
}

bool Context::isButtonStopPressed() {
  return buttonStop;
}

bool Context::isButtonResetPressed() {
  return buttonReset;
}

bool Context::isDetectionNear() {
  return detectionNear;
}

bool Context::isDetection() {
  return detection;
}

void Context::setInIdle() {
  this->reset();
  idle = true;
}

void Context::setButtonStarted() {
  this->reset();
  buttonStart = true;
}

void Context::setButtonStop() {
  this->reset();
  buttonStop = true;
}

void Context::setButtonReset() {
  this->reset();
  buttonReset = true;
}

void Context::setDetection() {
  this->reset();
  detection = true;
}

void Context::setDetectionNear() {
  this->reset();
  detectionNear = true;
}


void Context::reset() {
  idle = false;
  buttonStart = false;
  buttonStop = false;
  buttonReset = false;
  detectionNear = false;
  detection = false;
}

