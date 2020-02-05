/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 4º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: CONSTRUCCION DE AUTO CON PUENTE H L293D
  PAGINA  32 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(12, LOW);
digitalWrite(13, HIGH);
delay(2000);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
delay(2000);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(12, HIGH);
digitalWrite(13, LOW);
delay(2000);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
delay(2000);

}
