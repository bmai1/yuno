const int ledPin = 13;

void setup() { 
    pinMode(ledPin, OUTPUT); // init ledPin as output
    pinMode(2, INPUT);
    digitalWrite(2, HIGH);
} 

void loop() {  
    int digitalVal = digitalRead(2);
    if (digitalVal == HIGH) {
        digitalWrite(ledPin, LOW); // turn led off
    }
    else {
        digitalWrite(ledPin, HIGH); // turn led on 
    }
}