/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:CONSTRUCCION DE UN PUENTE H PARA INVERTIR GIRO DE UN MOTOR
   *  PAGINA 55 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,1);
digitalWrite(3,0);
digitalWrite(4,1);
digitalWrite(5,0);
delay(1000);
digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,0);
digitalWrite(5,0);
delay(1000);
digitalWrite(2,0);
digitalWrite(3,1);
digitalWrite(4,0);
digitalWrite(5,1);
delay(1000);
digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,0);
digitalWrite(5,0);
delay(1000);




}
