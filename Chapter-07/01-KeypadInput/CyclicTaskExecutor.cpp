#include <Arduino.h>
#include "CyclicTaskExecutor.h"

#define MAX_MILLIS (unsigned long)0xffffffff

ubrant::CyclicTaskExecutor::CyclicTaskExecutor(func_ptr_t func_ptr, unsigned int calling_interval_ms, bool call_on_zero) {
  funcPtr = func_ptr;
  change_interval(calling_interval_ms, call_on_zero);
}

void ubrant::CyclicTaskExecutor::change_interval(unsigned int calling_interval_ms, bool call_on_zero = false) {
  callingInterval_ms = calling_interval_ms;

  if (call_on_zero) {
    if (funcPtr != NULL) funcPtr();
  }
  
  lastCalledTime_ms = millis();
}

void ubrant::CyclicTaskExecutor::update(unsigned long current_time_ms) {
  unsigned long elapsedTime_ms = 0;
  
  if (current_time_ms < lastCalledTime_ms) {
    elapsedTime_ms = (MAX_MILLIS - lastCalledTime_ms) + current_time_ms;
  } else {
    elapsedTime_ms = current_time_ms - lastCalledTime_ms;
  }

  if (elapsedTime_ms >= callingInterval_ms) {
    lastCalledTime_ms = current_time_ms;
    if (funcPtr != NULL) funcPtr();
  }
}
