#include <Servo.h>

Servo myservo;  

void setup() {
  myservo.attach(9);  
}

void loop() {
  myservo.write(90);  
  delay(3000);       

  myservo.write(180);
  delay(3000);       
}
