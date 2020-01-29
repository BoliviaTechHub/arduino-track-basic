/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:DETECTOR DE PORCENTAJE DE ALCOHOL MOSTRANDO EN 5 LEDS
   *  PAGINA 90 DEL TEXTO*   */
int num_LED = 5;
int lec_sensor, nivel_alcohol;
int minimo = 100;
int maximo = 750;

void setup() {
  // put your setup code here, to run once:
for (int pLed = 2; pLed<7; pLed ++){
  pinMode(pLed, OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
lec_sensor= analogRead(A0);
lec_sensor= constrain(lec_sensor, minimo, maximo);
delay(20);
nivel_alcohol= map(lec_sensor, minimo, maximo, 2,7);
for(int pLed; pLed<7; pLed ++){
  if(pLed<nivel_alcohol){
    digitalWrite(pLed, HIGH);
    
  }
  else{
    digitalWrite(pLed, LOW);
 
  }
}
}
