 /* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 1 (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: CONTROL DEL MOTOR CON LDR ARDUINO Y L298N
   *  PAGINA 91 DEL TEXTO*   */
int LDR;

void setup() {
  // put your setup code here, to run once:
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(13, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
LDR=digitalRead(13);
if(LDR==1){
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
else
{
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}
}
