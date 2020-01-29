/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:DETECTOR DE ALCOHOL MOSTRANDO DATOS POR EL MONITOR SERIAL
   *  PAGINA 89 DEL TEXTO*   */


int sensor_mq;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
sensor_mq=digitalRead(7);
if(sensor_mq==1){
  Serial.println("Sin presencia de alcohol");
  
}
else{
   Serial.println("Alcohol detectado");
}
delay(100);
}
