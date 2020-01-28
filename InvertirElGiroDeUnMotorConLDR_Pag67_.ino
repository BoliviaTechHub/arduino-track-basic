/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2 (SECUNDARI COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: INVERTIR DE GIRO DEL MOTOR CON LDR
   *  PAGINA  67 DEL TEXTO*   */
int LDR;
void setup() {
  // put your setup code here, to run once:
pinMode(2, INPUT);
pinMode(5, OUTPUT);
pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
LDR=digitalRead(2);
if(LDR==1){
  digitalWrite(5, HIGH);
  digitalWrite(13, LOW);
  
}
else{
  digitalWrite(5, LOW);
  digitalWrite(13, LOW);
  
}
}
