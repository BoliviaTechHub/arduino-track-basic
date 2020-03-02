 /* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 1 (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: AUTO SEGUIDOR DE LUZ CON 2 LRD ARDUINO Y L298N
   *  PAGINA 92 DEL TEXTO*   */
int LDR1;
int LDR2;

void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(13, INPUT);
pinMode(13, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 LDR1=digitalRead(12);
 LDR2=digitalRead(13);
 delay(1000);
 if(LDR1==1 and LDR2==1){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  }
  if(LDR1==0 and LDR2==0){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  }
   if(LDR1==1 and LDR2==0){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  }
 if(LDR1==0 and LDR2==1){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  }
}
