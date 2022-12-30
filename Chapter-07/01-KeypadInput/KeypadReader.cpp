#include <Arduino.h>
#include "KeypadReader.h"

#define INVOKE_KEY_DOWN_HANDLER(r, c)      if (onKeyDown != NULL) onKeyDown(keyMap[r * cols + c]);
#define INVOKE_KEY_UP_HANDLER(r, c)        if (onKeyUp   != NULL) onKeyUp(keyMap[r * cols + c]);

#define SET_ALL_ROW_PINS_HIGH              for (unsigned char __r = 0; __r < rows; __r++) \
                                           { digitalWrite(rowPins[__r], HIGH); }

#define IS_KEY_STATUS_CHANGED(r, c, val)   keysStatus[r * cols + c] != val
#define SET_KEY_STATUS(r, c, val)          keysStatus[r * cols + c] = val

#define KEY_UNPRESSED_SYMBOL               HIGH
#define KEY_PRESSED_SYMBOL                 LOW

cblk::KeypadReader::KeypadReader(keypad_callback_t on_key_down, keypad_callback_t on_key_up,
                 const unsigned char num_rows, const unsigned char num_cols,
                 const unsigned char* row_pins, const unsigned char* col_pins,
                 const char* key_map) {

  onKeyDown = on_key_down;
  onKeyUp   = on_key_up;

  rows = num_rows;
  cols = num_cols;

  rowPins = row_pins;
  colPins = col_pins;

  keyMap = key_map;
  keysStatus = new char[rows * cols];

  for (unsigned char r = 0; r < rows; r++) { pinMode(rowPins[r], OUTPUT); }
  for (unsigned char c = 0; c < cols; c++) { pinMode(colPins[c], INPUT_PULLUP); }

  for (unsigned char r = 0; r < rows; r++) {
    for (unsigned char c = 0; c < cols; c++) {
      keysStatus[r * cols + c] = KEY_UNPRESSED_SYMBOL;
    }
  }
}

void cblk::KeypadReader::update() {
  for (unsigned char r = 0; r < rows; r++) {
    SET_ALL_ROW_PINS_HIGH;
    
    digitalWrite(rowPins[r], LOW);
    delayMicroseconds(timePerRow_us);
    
    for (unsigned char c = 0; c < cols; c++) {
      unsigned char val = digitalRead(colPins[c]);
      
      if (IS_KEY_STATUS_CHANGED(r, c, val)) {
        if (val == KEY_PRESSED_SYMBOL) {
          INVOKE_KEY_DOWN_HANDLER(r, c);
        } else {
          INVOKE_KEY_UP_HANDLER(r, c);
        }

        SET_KEY_STATUS(r, c, val);
      }
    }
  }
}
