/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 4º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: INVERTIR GIRO DEL MOTOR POR UN PULSADOR COMO SENSOR
  PAGINA  31 DEL TEXTO*   */
  int pulsador;
  int control;
void setup() {
  // put your setup code here, to run once:
pinMode(5, INPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
pulsador = digitalRead(6);
if(pulsador ==0){
  control= not control;
  delay(20);
}
if(control == true){
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}
else{
   digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}
}
