/*
  The program controls an LED connected to pin 2 on an Arduino board using a class called LED.
  In the LED class, there are three methods: on(), off(), and toggle().
  The on() method turns the LED on, the off() method turns it off, and the toggle() method changes the LED's state from on to off or vice versa.
  The program creates an instance of the LED class in the main file and calls its on() method to turn the LED on.
  It then waits for 1 second using the delay() function and calls the off() method to turn the LED off.
  It repeats this cycle indefinitely in the loop() function.
  The program is split into three files: LED.h, LED.cpp, and LED.ino.
  The LED.h file defines the LED class, the LED.cpp file implements its methods, and the LED.ino file creates an instance of the `LED` class and calls its methods in the setup() and loop() functions.
  By using classes allows the code to be seperated into three files, makes the program is easier to read, understand, and maintain. As wll as it allows for the code to easily be reused.
*/

#include "LED.h" //include library

LED led(2); //led pin

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  led.on(); //led on
  delay(1000); //delay time
  led.off(); //led off
  delay(1000); //delay time
}

