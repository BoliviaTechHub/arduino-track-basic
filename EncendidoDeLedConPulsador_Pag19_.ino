/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:ENCENDIDO CON LED CON PULSADOR
   *  PAGINA 19 DEL TEXTO*   */
bool encendido=true;

void setup() {
pinMode(3,INPUT);
pinMode(4, OUTPUT);
// put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int dd=digitalRead(3);
  if(dd==1){
    encendido= not encendido;
    
  }
  if(encendido==true){
    digitalWrite(4,HIGH);
  }
  else{
    digitalWrite(4,LOW);
    
  }
delay(10);
}
