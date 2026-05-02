int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;
int BUT4 = D3;

int LED1 = D4;
int LED2 = D5;
int LED3 = D6;
int LED4 = D7;

int BUZZ = D8;

bool timerRunning = false;

void setup() {
  pinMode(BUT1,INPUT_PULLUP);
  pinMode(BUT2,INPUT_PULLUP);
  pinMode(BUT3,INPUT_PULLUP);
  pinMode(BUT4,INPUT_PULLUP);

  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);

  pinMode(BUZZ,OUTPUT);
  long startTime = millis();

}

void loop() {
  int but1press = 0;
  long but2time;
  timerRunning  = true;
  if (digitalRead(BUT1) == HIGH) {
    but1press++;
    if (but1press%2 == 0){
      digitalWrite(LED3, HIGH);
    }
    else{
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
    }
  }
  else {
    digitalWrite(LED3, LOW);
  }
  if (digitalRead(BUT2) == HIGH) {
    timerRunning = true;
    but2time = millis();
    digitalWrite(LED1, HIGH);
    for(int i=0; i<3; i++){
      digitalWrite(BUZZ, HIGH);
      delay(200);
      digitalWrite(BUZZ, LOW);
      delay(200);
    }
    int but3press = 0;
    if (digitalRead(BUT3) == HIGH){
      but3press++;
    }
    if (timerRunning){
      if (but3press == 3){
        digitalWrite(LED2, HIGH);
        timerRunning = false;
      }
      else if (millis()-but2time >= 10000){
        digitalWrite(LED1, LOW);
        timerRunning = false;
        but3press = 0;
      }
    }
    if (but3press>3){
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      but3press = 0;
    }
  }

  else{
    digitalWrite(LED1, LOW);
  }

  if (digitalRead(BUT4) == HIGH){
    digitalWrite(LED4, HIGH);
  }
  else{
    digitalWrite(LED4, LOW);
  }
  if(digitalRead(LED1) == HIGH && digitalRead(LED2) == HIGH && digitalRead(LED3) == HIGH && digitalRead(LED4) == HIGH) {
    winSong();
  }
}

void winSong() {
  int melody[] = {262, 330, 392, 523, 392, 523, 659, 784};
  int duration[] = {150, 150, 150, 300, 150, 150, 150, 400};

  for (int i = 0; i < 8; i++) {
    tone(BUZZ, melody[i], duration[i]);
    delay(duration[i] + 50);
  }
  noTone(BUZZ);
}
