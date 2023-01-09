namespace cblk {
  
  typedef void(*keypad_callback_t)(char);
  
  
  class KeypadReader {
    private:
    
    keypad_callback_t onKeyDown = nullptr;
    keypad_callback_t onKeyUp   = nullptr;

    static const unsigned char timePerRow_us = 2;

    unsigned char rows;
    unsigned char cols;
    
    const unsigned char* rowPins;
    const unsigned char* colPins;
    
    const char* keyMap;
    
    char* keysStatus;
    
    
    
    public:
    
    KeypadReader(keypad_callback_t on_key_down, keypad_callback_t on_key_up,
                 const unsigned char num_rows, const unsigned char num_cols,
                 const unsigned char* row_pins, const unsigned char* col_pins,
                 const char* key_map);
    
    void update();
  };
  
}
