
#define RED 12
#define GRN 11
#define YLW 10
#define ORG 9
#define BUTTON 5

int buttonState = 0;
int buttonStat = 0;
boolean pressed = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GRN, OUTPUT);
  pinMode(YLW, OUTPUT);
  pinMode(ORG, OUTPUT);
  pinMode(BUTTON, INPUT);
 // digitalWrite(RED, HIGH);
}

void loop() {
  buttonState = digitalRead(BUTTON);
  if (buttonState == 1){
    switch(buttonStat){
      case 0 : digitalWrite(YLW,LOW);
                digitalWrite(RED,HIGH);
                break;
      case 1 : digitalWrite(RED,LOW);
              digitalWrite(GRN,HIGH);
            break;
      case 2 : digitalWrite(GRN,LOW);
              digitalWrite(YLW,HIGH);
              break;
      case 3 : digitalWrite(RED,HIGH);
              digitalWrite(YLW,HIGH);
              break;
    }
    digitalWrite(LED_BUILTIN, HIGH);
    delay(15000);
    digitalWrite(LED_BUILTIN, LOW);
    buttonStat++;
    if (buttonStat > 3) {
      buttonStat = 0;
    }
  }
}
