/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: LIBRERIA Y ESTRUCTURA DE PROGRAMACON PARA CONTROLAR UN SERVOMOTOR
  PAGINA  19 DEL TEXTO*   */
#include <Servo.h>
Servo MI_SERVO;
int posicion = 0;

void setup() {
  // put your setup code here, to run once:
MI_SERVO.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
for(posicion =0 ; posicion <= 180; posicion ++){
  MI_SERVO.write(posicion);
  delay(15);
}
for(posicion =180 ; posicion <= 0; posicion --){
  MI_SERVO.write(posicion);
  delay(15);
}
}
