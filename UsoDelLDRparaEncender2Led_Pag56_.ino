 /* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 1 (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: USO DE LDR PARA ENCENDER 2 LEDS
   *  PAGINA 56 DEL TEXTO*   */
int LDR;
void setup() {
  // put your setup code here, to run once:
pinMode(3,INPUT);
pinMode(8, OUTPUT);
pinMode(12, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
LDR=digitalRead(3);
if(LDR==1){
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);
}
else{
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
}
}
/*los led estaran encendidos mientras haya luz, si tapamos el LDR se los leds se apagaran*/
