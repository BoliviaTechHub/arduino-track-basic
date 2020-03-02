 /* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 1 (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: VENTILADOR VARIADO CON EL USO DE PULSADORES
   *  PAGINA 80 DEL TEXTO*   */
int pulsador1;
int pulsador2;
int motor=0;

void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(7, INPUT);
pinMode(6, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
pulsador1=digitalRead(6);
pulsador2=digitalRead(7);
if(pulsador1==0){
  motor ++;
  
}
if(pulsador2==0){
  motor --;
  
}
if(motor==1){
 digitalWrite(13,HIGH);
 digitalWrite(12,LOW); 
}
if(motor==0){
 digitalWrite(13,LOW);
 digitalWrite(12,LOW); 
}
}
