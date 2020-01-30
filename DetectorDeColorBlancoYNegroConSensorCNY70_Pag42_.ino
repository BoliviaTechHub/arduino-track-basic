/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:DETECTOR DE COLOR BLANCO Y NEGRO CON SENSOR CY70*
  PAGINA 42 DEL TEXTO*   */
int pinCNY=10;
int senVal;
int pinLed = 7;
void setup(){
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pinLed, OUTPUT);
pinMode(pinCNY, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
senVal=digitalRead(pinCNY);
Serial.println(senVal);
if(pinCNY==1){
  digitalWrite(pinLed, HIGH);
  
}
else{
  digitalWrite(pinLed, LOW);
  
}
delay(1000);
}
