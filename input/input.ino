int ledPin = 5;
int onPin = 9;
int offPin = 8;

byte leds = 0;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(onPin, INPUT_PULLUP);  
    pinMode(offPin, INPUT_PULLUP);  
}

void loop() {
    if (digitalRead(onPin) == LOW) {
        digitalWrite(ledPin, HIGH);
    }
    if (digitalRead(offPin) == LOW) {
        digitalWrite(ledPin, LOW);
    }
}
