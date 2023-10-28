// // #include "HC-SR04/SR04.h"
// #include <SR04.h>

// #define TRIG_PIN 12
// #define ECHO_PIN 11
// SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);
// long a;

// void setup() {
//     Serial.begin(9600);
//     delay(1000);
// }

// void loop() {
//     a = sr04.Distance();
//     Serial.print(a);
//     Serial.println("cm");
//     delay(1000);
// }

// rewrite with newping lib
#include <NewPing.h>

#define TRIG_PIN 12
#define ECHO_PIN 11
NewPing sonar(TRIG_PIN, ECHO_PIN);

void setup() {
   Serial.begin(9600);
}

void loop() {
   delay(50);  // Wait for 50 milliseconds between measurements.
   unsigned int distance = sonar.ping_cm();  // Get the distance in centimeters.
   Serial.print("Distance: ");
   Serial.print(distance);
   Serial.println(" cm");
   delay(1000);  // Delay between measurements.
}