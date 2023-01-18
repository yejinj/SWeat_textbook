int cdsPin = 0;
int ledPin = 11;
int cdsValue = 0;
int ledValue = 0;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    cdsValue = analogRead(cdsPin);
    ledValue = map(cdsValue, 0, 1023, 0, 255);
    digitalWrite(ledPin, ledValue);
    delay(10);
}
