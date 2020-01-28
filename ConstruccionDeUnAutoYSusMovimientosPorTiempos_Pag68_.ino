/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2 (SECUNDARI COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: CONSTRUCCION DE UN AUTO Y SUS MOVIMIENTOS POR TIEMPO
   *  PAGINA 68 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8,HIGH);
digitalWrite(9, LOW);
digitalWrite(12,HIGH);
digitalWrite(13, LOW);
delay(2000);
digitalWrite(8,LOW);
digitalWrite(9, LOW);
digitalWrite(12,LOW);
digitalWrite(13, LOW);
delay(2000);
digitalWrite(8,LOW);
digitalWrite(9, HIGH);
digitalWrite(12,LOW);
digitalWrite(13, HIGH);
delay(2000);
digitalWrite(8,LOW);
digitalWrite(9, LOW);
digitalWrite(12,LOW);
digitalWrite(13, LOW);
delay(2000);
}
