 /* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 1 (SECUNDARI COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: CONTROL Y GIRO DEL MOTOR
   *  PAGINA 67 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(5, HIGH);
delay(2000);
digitalWrite(5, LOW);
delay(1000);
}
/*El Motor Comienza a funcionar*/
