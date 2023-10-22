#include <Servo.h>

Servo myservo; // create servo object

int pos = 0; // store servo position

void setup() {
    Serial.begin(9600);
    myservo.attach(9);  // attach servo on pin 9
}

void loop() {
  // 0 to 180 deg
  for (pos = 0; pos <= 180; ++pos) { 
      myservo.write(pos);         
      delay(15);                      
  }
  // 180 to 0 deg
  for (pos = 180; pos >= 0; pos -= 1) { 
      myservo.write(pos);             
      delay(15);                      
  }
 
}

