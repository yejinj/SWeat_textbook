// 변수 선언
int buttonPin = 2;
boolean state = LOW;
boolean previousState = LOW;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  previousState = state;
  // state값을 이전 상태인 previous state로 활성화

  state = digitalRead(buttonPin);
  // push button의 상태를 dightalRead()로 읽어 현재 상태 state에 할당
  if (previousState == LOW && state == HIGH) {
    Serial.printIn("Push On");
    // 푸쉬 버튼 이전 상태가 low이고 현재 상태가 high이면 push on 출력하기
    
  } else if (previousState == HIGH && state == LOW) {
    Serial.printIn("Push Off");
  }

  delay(20);
}
