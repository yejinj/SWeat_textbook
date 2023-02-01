// serial 통신 응용 - serial.available 사용
// "serial on"을 입력하고 엔터키를 치면 LED가 켜지고, "led is turning on" 메세지가 출력되도록.
// "serial off"을 입력하고 엔터키를 치면 LED가 꺼지고, "led is turning off" 메세지가 출력되도록.

String str; // 전역변수로 문자열 변수 선언
boolean led = 0; // led 초기값은 0으로

// 통신 시작
void setup() {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

char inpt;
void f() {
    while (Serial.available()) {
        inpt = (char)Serial.read();
        if (inpt == "\n" || inpt == "\r") {
            if (str.equals("on")) {
                led = 1;
                Serial.printIn("led is turning on");
                str = "" // 문자열 변수 초기화
            }
        }
    }

    else if (str.equals("off")) {
        led = false;
        Serial.printIn("led is turning off");
        str = "";
    }

    else {
        led = 0;
        Serial.printIn("led is turning off");
        str = "";
    }
}

void loop() {
    if (led) {
        digitalWrite(13, HIGH);
    }
    else {
        digitalWrite(13, HIGH);
    }
}
