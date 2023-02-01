// 시리얼 통신 = serial bus = 직렬 통신.
// 통신 채널로 한 번에 한 비트씩 데이터를 전송하는 과정
// 이용 핀 : 0, 1번 핀, usb 연결

// 9600의 속도로 시리얼 통신 시작하기
void setup() {
    Serial.begin(9600);
}

// serial print : 출력은 이어서 출력된다.
Serial.print("serial");
Serial.print("transmission");

// 통신 시작 후

void loop() {
        if (Serial.available()) {
                tmp = Serial.read(); // 버퍼에서 값 읽어오기.
                Serial.println(tmp); // 읽어온 값 출력하기.
        }

    delay(10000);
}

// 시리얼 통신 종료
Serial.end();
