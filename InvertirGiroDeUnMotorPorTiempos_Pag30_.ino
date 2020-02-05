/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 4º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: INVERTIR GIRO DEL MOTOR POR TIEMPOS
  PAGINA  30 DEL TEXTO*   */
  
void setup() {
  // put your setup code here, to run once:
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
delay(2000);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
delay(2000);
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
delay(2000);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
delay(2000);
}
