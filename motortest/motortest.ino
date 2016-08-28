const int DIR1 = 4; //orange
const int PWM1 = 7;
const int DIR2 = 8; //brown
const int PWM2 = 9; //white



void setup() {
  pinMode(DIR1, OUTPUT);
  pinMode(PWM1, OUTPUT);
  pinMode(DIR2, OUTPUT);
  pinMode(PWM2, OUTPUT);
  digitalWrite(DIR1, LOW);
  digitalWrite(DIR2, LOW);
  
}

void loop() {
  //analogWrite(DIR1, 0);
  //analogWrite(DIR2, 0);
  //analogWrite(PWM1, 0); //parking break
  //analogWrite(PWM2, 0); //parking break
  analogWrite(PWM2, 255);
  analogWrite(PWM1, 255);
  


}
