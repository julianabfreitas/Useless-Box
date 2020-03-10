#include <string.h>

#define interruptor 13
#define led_verde 10

void setup() {
   pinMode(interruptor, INPUT);
   pinMode(led_verde, OUTPUT);
}

void loop() {
  if (digitalRead(interruptor)==LOW){
    digitalWrite(led_verde, HIGH);
  }
  else{
     digitalWrite(led_verde, LOW);
  }
  
}
