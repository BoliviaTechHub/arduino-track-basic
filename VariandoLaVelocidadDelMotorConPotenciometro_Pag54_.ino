/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:VARIAMOS LA VELOCIDAD DEL MOTOR CON EL POTENCIOMETRO
   *  PAGINA 54 DEL TEXTO*   */
int potenciometro;
int  motor;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potenciometro=analogRead(A0);
motor = map(potenciometro,0,1024,0,255);
analogWrite(3, motor);
}
