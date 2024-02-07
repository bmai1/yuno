#define ENABLE 5
#define DIRA 3
#define DIRB 4

void setup() {
  pinMode(ENABLE, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
//   Serial.begin(9600);
}

void setup() {
  pinMode(ENABLE, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
}

void loop() {
  digitalWrite(ENABLE, HIGH);
  digitalWrite(DIRA, HIGH);
  digitalWrite(DIRB, LOW);
}

// void loop() {
//   digitalWrite(ENABLE, HIGH);
//   for (int i = 0; i < 5; ++i) {
//     digitalWrite(DIRA, HIGH);
//     digitalWrite(DIRB, LOW);
//     delay(500);

//     // reverse
//     digitalWrite(DIRA, LOW);
//     digitalWrite(DIRB, HIGH);
//     delay(500);
//   }
//   // disable
//   digitalWrite(ENABLE, LOW); 
//   delay(2000);
// }