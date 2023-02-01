// 초음파 센서 사용 시, 보내는 핀과 받는 핀 두 개가 필요

#define TRIG 9 // 초음파 보내는 핀
#define ECHO 8 // 초음파 받는 핀

void setup() {
    Serial.begin(9600); // 시리얼 통신 시작

    pinMode(TRIG, OUTPUT); // 초음파 출력으로 핀모드 설정
    pinMode(ECHO, INPUT); // 입력으로 핀모드 설정
}

void loop() {
    long distance;
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);

    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);

    digitalWrite(TRIG, LOW);


    // 반사되어 돌아오는 시간 변수 지정.
    long time;
    time = pulseln (ECHO, HIGH);

    // 초음파센서가 통행한 거리값 계산
    distance = time * 17 / 1000; 

    // 계산한 시간과 거리값 출력하기
    Serial.println("time: ", time);
    Serial.println("distance: ", distance, "cm");
    
    // 루프 안에서 일정 시간마다 측정값 출력
    delay(1000);
}
