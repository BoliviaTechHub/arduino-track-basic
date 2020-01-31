/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:CONTADOR DEL 0 AL 9 CON DISPLAY DE 7 SEGMENTOS CATODO COMUN
   *  PAGINA 30 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2, 0);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 0);
digitalWrite(6, 0);
digitalWrite(7, 0);
digitalWrite(8, 1);/*NUMERO0 0*/
delay(1000);
digitalWrite(2, 1);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 1);
digitalWrite(6, 1);
digitalWrite(7, 1);
digitalWrite(8, 1);/*NUMERO 1*/
delay(1000);
digitalWrite(2, 0);
digitalWrite(3, 0);
digitalWrite(4, 1);
digitalWrite(5, 0);
digitalWrite(6, 0);
digitalWrite(7, 1);
digitalWrite(8, 0);/*NUMERO 2*/
delay(1000);
digitalWrite(2, 0);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 0);
digitalWrite(6, 1);
digitalWrite(7, 1);
digitalWrite(8, 0);/*NUMERO 3*/
delay(1000);
digitalWrite(2, 1);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 1);
digitalWrite(6, 1);
digitalWrite(7, 0);
digitalWrite(8, 0);/*NUMERO 4*/
delay(1000);
digitalWrite(2, 0);
digitalWrite(3, 1);
digitalWrite(4, 0);
digitalWrite(5, 0);
digitalWrite(6, 1);
digitalWrite(7, 0);
digitalWrite(8, 0);/*NUMERO 5*/
delay(1000);
digitalWrite(2, 0);
digitalWrite(3, 1);
digitalWrite(4, 0);
digitalWrite(5, 0);
digitalWrite(6, 0);
digitalWrite(7, 0);
digitalWrite(8, 0);/*NUMERO 6*/
delay(1000);
digitalWrite(2, 0);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 1);
digitalWrite(6, 1);
digitalWrite(7, 1);
digitalWrite(8, 1);/*NUMERO 7*/
delay(1000);
digitalWrite(2, 0);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 0);
digitalWrite(6, 0);
digitalWrite(7, 0);
digitalWrite(8, 0);/*NUMERO 8*/
delay(1000);
digitalWrite(2, 0);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 0);
digitalWrite(6, 1);
digitalWrite(7, 0);
digitalWrite(8, 0);/*NUMERO 9*/
delay(1000);
 
}
