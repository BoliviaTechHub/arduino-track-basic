/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:ENCENDIDO DE UN LED CON TRANSISTOR
   *  PAGINA 42 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2, HIGH);
delay(1000);
digitalWrite(2, LOW);
delay(1000);
}
