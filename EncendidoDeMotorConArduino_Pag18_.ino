/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: ENCENDIDO DE MOTOR CON ARDUINO
  PAGINA 18 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(5, HIGH);
delay(1000);
digitalWrite(5, LOW);
delay(1000);
}
