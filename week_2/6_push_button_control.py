from Arduino import Arduino
import time

ledPin = 13
buttonPin = 11

board = Arduino("9600", port = "COM3")
board.pinMode(ledPin, "OUTPUT")
board.pinMode(buttonPin, "INPUT")

while True:
    buttonState = board.digitalRead(buttonPin)
    if (buttonState):
        board.digitalWrite(ledPin, "HIGH")
        print ("Push!")
    else:
        board.digitalMode(ledPin, "LOW")
    time.sleep(0.01)

    # 디지털 11번의 입력 값을 저장하여, 13번에서 이 값이 1이면 (조건식에서 참이면) led에 불을 켜고, "push" 를 출력
