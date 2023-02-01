// Serial.readString(); 함수 사용하기 + 응용하기


// 시리얼 통신 시작
void setup() {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

String inpt;
String str = ''; // 공백 문자열 지정
void loop() {
    for (int i = 0; i < 5; i++) {
        if (Serial.available()) inpt = Serial.readString();

        if (inpt = "on") {
            // 문자열로 inpt 변수를 지정해서, 읽어들인 문자열이 on이라면 on을 출력한다
            Serial.printIn("On");
            digitalWrite(13, HIGH); // 불 켜기
            str.append(inpt) // 공백 문자열에 입력받은 문자열 더하기
        }


        else if (inpt = "off") {
            Serial.printIn("Off");
            digitalWrite(13, LOW); // 불 끄기
        }
    }
}

digitalWrite(str); // 합산한 문자열 출력
Serial.end();
// 시리얼 통신 종료
