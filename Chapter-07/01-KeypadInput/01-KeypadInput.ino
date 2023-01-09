#include "KeypadReader.h"


using namespace cblk;


// ------------------------
// Keypad Events
// ------------------------

void on_key_press(char key) {
  Serial.print(key);
  Serial.println('+');
}

void on_key_release(char key) {
  Serial.print(key);
  Serial.println('-');
}


// ------------------------
// Defining the Keypad
// ------------------------

constexpr unsigned char rows = 4;
constexpr unsigned char cols = 4;
constexpr unsigned char rowPins[rows] = {9, 8, 7, 6};
constexpr unsigned char colPins[cols] = {5, 4, 3, 2};
constexpr char keyMap[] = {
  //   Col-1   Col-2   Col-3   Col-4
       '1',    '2',    '3',    'A', // Row-1
       '4',    '5',    '6',    'B', // Row-2
       '7',    '8',    '9',    'C', // Row-3
       '*',    '0',    '#',    'D'  // Row-4
};

KeypadReader keypad(on_key_press, on_key_release, rows, cols, rowPins, colPins, keyMap);


// ------------------------
// Initialization
// ------------------------

void setup() {
  Serial.begin(115200);
}


// ------------------------
// Main loop
// ------------------------

void loop() {
  keypad.update();
}
