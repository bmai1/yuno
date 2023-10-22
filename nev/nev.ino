
#define pin 8

void song(int buzzerPin) {
  tone(buzzerPin, 440);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 740);
  delay(388);
  noTone(buzzerPin);

  tone(buzzerPin, 740);
  delay(388);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(776);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(517);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(366);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(366);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(776);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 740);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 740);
  delay(776);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(776);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(517);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(776);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(517);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 740);
  delay(366);
  noTone(buzzerPin);

  tone(buzzerPin, 740);
  delay(420);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(776);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(517);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(366);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(366);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(776);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(108);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 740);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(129);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(776);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(776);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(517);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(259);
  noTone(buzzerPin);

  tone(buzzerPin, 740);
  delay(259);
  noTone(buzzerPin);

  tone(buzzerPin, 740);
  delay(259);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(1293);
  noTone(buzzerPin);
}

// define pins (pwm)
#define BLUE 3
#define GREEN 5
#define RED 6

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    song(pin);
}

int redValue;
int greenValue;
int blueValue;

void loop() {
    #define delayTime 1 // fading time between colors
    #define m 100 // max rgb value 1-255
    redValue = m;
    greenValue = 0;
    blueValue = 0;

    // red->green
    for (int i = 0; i < m; ++i) {
        --redValue;
        ++greenValue;
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        delay(delayTime);
    }

    // green->blue
    for (int i = 0; i < m; ++i) {
        --greenValue;
        ++blueValue;
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
        delay(delayTime);
    }

    // blue->red
    for (int i = 0; i < m; ++i) {
        --blueValue;
        ++redValue;
        analogWrite(BLUE, blueValue);
        analogWrite(RED, redValue);
        delay(delayTime);
    }
}
