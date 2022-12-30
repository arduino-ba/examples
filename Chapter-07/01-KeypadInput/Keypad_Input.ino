#include "CyclicTaskExecutor.h"
#include "KeypadReader.h"

using namespace ubrant;

// Keypad Reading Area
//
void on_key_press(char key) {
  Serial.print(key);
  Serial.println('+');
}

void on_key_release(char key) {
  Serial.print(key);
  Serial.println('-');
}

constexpr unsigned char rows = 4;
constexpr unsigned char cols = 4;
constexpr unsigned char rowPins[rows] = {2, 3, 4, 5};
constexpr unsigned char colPins[cols] = {6, 7, 8, 9};
constexpr char keyMap[] = {
  //   Col-1   Col-2   Col-3   Col-4
       '1',    '2',    '3',    'A', // Row-1
       '4',    '5',    '6',    'B', // Row-2
       '7',    '8',    '9',    'C', // Row-3
       '*',    '0',    '#',    'D'  // Row-4
};

KeypadReader keypad(on_key_press, on_key_release, rows, cols, rowPins, colPins, keyMap);


// Keypad Task Running Area
//
void read_keypad() {
  keypad.update();
}

void heartbeat() {
  Serial.print(".");
}

CyclicTaskExecutor keypad_reader_task(read_keypad, 50);
CyclicTaskExecutor heartbeat_task(heartbeat, 1000);


// Standard Functions
//
void setup() {
  Serial.begin(115200);
}

void loop() {
  unsigned long t = millis();

  keypad_reader_task.update(t);
  heartbeat_task.update(t);
}
