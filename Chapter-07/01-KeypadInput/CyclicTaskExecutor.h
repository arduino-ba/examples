namespace ubrant {
  typedef void(*func_ptr_t)();
  
  class CyclicTaskExecutor {
    private:
    
    func_ptr_t funcPtr;
    unsigned int callingInterval_ms;
    unsigned long lastCalledTime_ms;
    
    public:
    
    CyclicTaskExecutor(func_ptr_t func_ptr, unsigned int calling_interval_ms, bool call_on_zero = false);
    void change_interval(unsigned int calling_interval_ms, bool call_on_zero = false);
    void update(unsigned long current_time_ms);
  };
}
