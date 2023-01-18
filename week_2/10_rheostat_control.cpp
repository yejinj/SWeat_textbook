int potPin = 0;
int ledPin = 11;
int potValue = 0;
int brightness = 0;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    potValue = analogRead(potPin);
    brightness = map(potValue, 0, 1023, 0, 255);

    digitalWrite(ledPin, brightness);
    delay(100);
}
