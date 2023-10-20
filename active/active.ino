int buzzer = 12; // active buzzer pin

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
    unsigned char i;
    for (;;) {
        // output a frequency
        digitalWrite(buzzer, HIGH);
        delay(1);
        digitalWrite(buzzer, LOW);
        delay(1); 
    }
} 
