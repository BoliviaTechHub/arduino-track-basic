 /* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 1 (SECUNDARI COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: USO DE LDR PARA VER DATOS EN EL MONITOR SERIAL
   *  PAGINA 54 DEL TEXTO*   */
int entrada;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(3, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
entrada=digitalRead(3);
if(entrada==1){
  Serial.println("SENSOR OK");
  
}
else{
 Serial.println("ALERTA"); 
}
}
