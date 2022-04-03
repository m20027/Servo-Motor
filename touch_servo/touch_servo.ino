#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(7, 500, 2400);
  myservo.write(180);
}

void loop() {
  int value = digitalRead(14);
  int angle = 0;
  
  while(value == LOW){
      myservo.write(180 - angle);
      value = digitalRead(14);
      angle += 2;
  }
  
  while(value == HIGH){
    myservo.write(180);
    value = digitalRead(14);
  }
  
  //myservo.write(180);
}
