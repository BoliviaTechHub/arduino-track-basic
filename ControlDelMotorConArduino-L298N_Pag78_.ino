 /* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 1 (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: CONTROL DEL MOTOR CON ARDUINO Y L298N
   *  PAGINA 78 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(12, HIGH);
digitalWrite(13, LOW);
delay(1000);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
delay(1000);
}
