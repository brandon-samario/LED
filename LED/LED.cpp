#include "LED.h" //include library
#include <Arduino.h> //include library

LED::LED(int pin) { //led
  this->pin = pin; //pin equal pin
  pinMode(pin, OUTPUT); //pin set as output
  state = LOW; //set state to low
}

void LED::on() { //led on
  state = HIGH; //led on when state is high
  digitalWrite(pin, state); //set pin to high state
}

void LED::off() { //led off
  state = LOW; //led off when state is low
  digitalWrite(pin, state); //set pin to low state
}

void LED::toggle() { //toggle led
  state = !state; //stae equals (!NOT state)
  digitalWrite(pin, state); //state of pin (led)
}
