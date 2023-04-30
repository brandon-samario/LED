#ifndef LED_H //if not defined
#define LED_H //define library

class LED { //led class
  private: //private
    int pin; //led pin
    bool state; //state of led

  public: //public
    LED(int pin); //contructor
    void on(); //led on
    void off(); //led off
    void toggle(); //toggle led
};

#endif
