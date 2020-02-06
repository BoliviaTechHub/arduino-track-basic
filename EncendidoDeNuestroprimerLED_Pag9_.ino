/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 6º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: ENCENDIDO DE NUESTRO PRIMER LED
  PAGINA  9 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);
delay(1000);
}
