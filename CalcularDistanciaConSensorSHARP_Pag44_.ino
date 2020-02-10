#include <SharpIR.h>

/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:CALCULAR DIATANCIA CON SENSOR SHARP*
  PAGINA 44 DEL TEXTO*   */

#define ir A0
#define model 1080
boolean done = false;
/*#define model 20150*/
SharpIR sharp(SharpIR::GP2Y0A41SK0F, A0);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ir, INPUT);
  for (int led = 2; led < 9; led++) {
    pinMode(led, OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  int  dis = sharp.getDistance();
  Serial.println(dis);
  if (dis == 7) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  else if (dis == 8) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  else if (dis == 9) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  else if (dis == 10) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  else if (dis == 11) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  else if (dis == 12) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }
  else if (dis == 13) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  delay(10);
}
