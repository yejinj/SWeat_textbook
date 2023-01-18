int buttonPin = 3;
int ledPin = 11;

void setup() {
    pinMode(buttonPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    if (digitalRead(buttonPin) == HIGH) {
        for (int i = 0; i <= 255; i += 5) {
            analogWrite(ledPin, i);
            delay(10);
        } else {
            analogWrite(ledPin, 0);
        }
    }

    // 밝기 증가 감소 간격 변경
    // for (int brightness = 0; brightness <= 255; brightness++) {
    //     analogWrite(ledPin, brightness);
    //     delay(10);
    // }
    // for (int brightness = 255; brightness >= 0; brightness--) {
    //     analogWrite(ledPin, brightness);
    //     delay(10);
    // }
}
