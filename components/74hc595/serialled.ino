int tDelay = 100;
int latchPin = 11; // (11) ST_CP [RCK] on 74HC595
int clockPin = 9;  // (9) SH_CP [SCK] on 74HC595
int dataPin  = 12; // (12) DS [S1] on 74HC595

byte leds = 0;

void updateShiftRegister() {
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);

  Serial.begin(9600);
  while (!Serial); // wait until Serial ready 
  Serial.println("Enter 0 - 7 (x)");
}

void loop() {
  char c = Serial.read();
  if (c >= '0' && c <= '7') {
    int led = c - '0';
    for (int i = 0; i <= led; ++i) {
      bitSet(leds, i);
    }
    updateShiftRegister();
    Serial.print("LED enabled: ");
    Serial.println(led);
  }
  if (c == 'x') {
    leds = 0;
    updateShiftRegister();
    Serial.println("Cleared");
  }
}

