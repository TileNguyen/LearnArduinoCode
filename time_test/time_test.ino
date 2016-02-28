unsigned long time,time1;

void setup() {
  // put your setup code here, to run once:
  //  Serial.begin(9600);
  time = millis(); // get time from begin start.
  time1 = millis();
  pinMode(12, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  analogWrite(6,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  //  Serial.print("Time : ");
  if ((unsigned long)(millis() - time) > 200) {

    if (digitalRead(12) == LOW) {
      digitalWrite(12, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(8, LOW);
      digitalWrite(4,HIGH);
    } else {
      digitalWrite(12, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4,LOW);
    }
    time = millis();
  }

  if ((unsigned long)(millis() - time1) > 50) {
    if (digitalRead(6) == LOW){
      digitalWrite(6,HIGH);
    } else{
      digitalWrite(6, LOW);
    }
    time1 = millis();
  }


  //  if((millis()-time)%13 == 0){
  //    digitalWrite(2,HIGH);
  //  } else{
  //    digitalWrite(2,LOW);
  //  }

  //  time = millis(); // get time from begin start.
  //  Serial.println(time);
}
