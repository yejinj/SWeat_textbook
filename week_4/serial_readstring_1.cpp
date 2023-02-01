// Serial.readString(); 함수 사용하기
// 시리얼 통신 시작하기
void setup() {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

String inpt;
// 문자열로 inpt 변수를 지정해서, 읽어들인 문자열이 on이라면 on을 출력한다.
void loop() {
    if (Serial.available()) inpt = Serial.readString();

    if (inpt = "on") Serial.printIn("On");
    else if (inpt = "off") Serial.printIn("Off");
}

Serial.end();
// 시리얼 통신 종료
