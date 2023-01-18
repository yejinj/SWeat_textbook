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


//조도센서로 주변 밝기 측정하기
int cdsPin = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int value = analogRead(cdsPin);
  Serial.print("value: ");
  Serial.println(value);
  delay(200);
}

// 조도 센서로 LED 깜박이기
int redPin = 13;
int greenPin = 11;
int cdsPin = 0;
int cdsValue = 0;

void setup(){
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop(){
  cdsValue = analogRead(cdsPin);

  if(cdsValue < 600){
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  } else{
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
}
