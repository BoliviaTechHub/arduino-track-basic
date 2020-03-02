/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2 (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:CONTRUCION DE UN VENTILAODR PERSONAL
   *  PAGINA 56  DEL TEXTO*   */
int pulsador;
int velocidad=0;
void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
pulsador=digitalRead(5);
delay(200);
if(pulsador == 0){
  velocidad = velocidad +1;
  
}
if(velocidad == 1){
  analogWrite(3,120);
}
if(velocidad == 2){
  analogWrite(3, 190);
  
}
if(velocidad == 3){
  analogWrite(3,0);
  velocidad =0;
}
}
