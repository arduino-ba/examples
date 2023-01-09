#include "CyclicTaskExecutor.h"


using namespace cblk;


CyclicTaskExecutor* exe_1;
CyclicTaskExecutor* exe_2;

void task_1() {
  Serial.print(".");
}

void task_2() {
  Serial.print("|");
}


void setup() {
  Serial.begin(115200);
  
  exe_1 = new CyclicTaskExecutor(task_1, 1000);
  exe_2 = new CyclicTaskExecutor(task_2, 5000);
}


void loop() {
  unsigned long currentTime_ms = millis();
  
  exe_1->update(currentTime_ms);
  exe_2->update(currentTime_ms);
}
