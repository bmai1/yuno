#include <Servo.h>

const int photocell = A0;
const int servo_pin = 9;

Servo servo;

int pos = 0;       // servo position (0-360)
int max_pos = 120; // point where servo presses space bar
int value;         // value from photocell (0-1023)

void setup() {
  Serial.begin(9600);
  servo.attach(servo_pin); 
  servo.write(90);
}

void jump() {
    for (pos = 90; pos <= max_pos; pos += 10) {
        servo.write(pos);              
        delay(10);                      
    }
    for (pos = max_pos; pos >= 90; pos += 10) { 
        servo.write(pos);             
        delay(10);                     
    }
}
             
void loop() {
    value = analogRead(photocell);
    Serial.println(value);

    // Value represents the amount of light hitting photocell
    // Value below a certain amount means it detects an obstacle (in light mode)

    if (value < 170) {
        jump();
    }
}
             