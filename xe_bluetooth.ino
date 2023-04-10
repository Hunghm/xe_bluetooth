int in1 = 4;
int in2 = 5;
int in3 = 6;
int in4 = 7;
int front_led = 9;
int back_led = 10;
int coi_buzz = 8;

//String ;
char state;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(front_led, OUTPUT);
  pinMode(back_led, OUTPUT);
  pinMode(coi_buzz, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    //    state = Serial.readString();
    state = Serial.read();
    Serial.println("doc tu");
    Serial.println(state);

    if (state == 'R') {
      xacLapLai();
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      Serial.println("phai");
    }
    else if (state == 'L') {
      xacLapLai();
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      Serial.println("trai");
    }
    else if (state == 'B') {
      xacLapLai();
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      Serial.println("lui");
    }
    else if (state == 'F') {
      xacLapLai();
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      Serial.println("tien");
    }
    else if (state == 'S') {
      xacLapLai();
      Serial.println("dung");
    }
    else if (state == 'W') {
      digitalWrite(front_led, HIGH);
      Serial.println("bat den truoc");
    }
    else if (state == 'w') {
      digitalWrite(front_led, LOW);
      Serial.println("tat den truoc");
    }
    else if (state == 'U') {
      digitalWrite(back_led, HIGH);
      Serial.println("bat den sau");
    }
    else if (state == 'u') {
      digitalWrite(back_led, LOW);
      Serial.println("tat den sau");
    }
    else if (state == 'V') {
      for (int i = 0; i <= 10; i++) {
        tone(8, 175, 900);
      }
      Serial.println("bat coi");
    }
    else if (state == 'v') {
      Serial.println("tat coi");
    }
  }


  //    delay(1000);
}
void xacLapLai() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
