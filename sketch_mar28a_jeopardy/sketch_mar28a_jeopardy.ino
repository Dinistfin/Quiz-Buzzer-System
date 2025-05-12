#include "stm32f1xx_hal.h"

typedef enum {
  idle
} Mode;

volatile Mode mode = idle;

void setup() {
  // put your setup code here, to run once:
  pinMode(PC13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PC13,HIGH);
  delay(1000);
  digitalWrite(PC13,LOW);
  delay(500);

  switch (mode){
    default: //idle mode
    // statements
    // Question is being read
    // All resets lead to this case

    break;

    case 0: //false start
    // statements
    // Happens when player presses too early
    // Should light up any teams that pressed early

    break;
    
    case 1: //watch
    // statements
    // watches for players for buzz in

    break;

    case 2: //capture
    // statements
    //1st player to buzz in has a solid led
    //2nd pllayer to buzz in had a blinking led

    break;
  }
}
   


