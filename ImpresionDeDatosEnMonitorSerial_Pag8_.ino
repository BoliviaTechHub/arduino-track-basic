/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 6º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: IMPRESION DE DATOS EN MONITOR SERIAL
  PAGINA  8 DEL TEXTO*   */
  int tiempo = 500;
  
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println('1');
delay(tiempo);
Serial.println('2');
delay(tiempo);
Serial.println('3');
delay(tiempo);
}
