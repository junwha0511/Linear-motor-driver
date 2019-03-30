int pin 1 = 6; //첫번째 릴레이
int pin 2 = 7; //두번째 릴레이

void slideIn(){ //리니어 모터를 안으로 넣는 함수
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
}

void slideOut(){ //리니어 모터를 앞으로 미는 함수
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  slideIn();
  delay(5000);
  slideOut();
  delay(5000);
}
