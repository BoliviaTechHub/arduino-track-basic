/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:VARIANDO LA INTENSIDAD DEL LED CON POTENCIOMETRO
   *  PAGINA 20 DEL TEXTO*   */
int potenciometro;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  potenciometro = analogRead(A0);
  long dato = map(potenciometro, 0, 1023, 0, 255);
  Serial.println(dato);
  analogWrite(5, dato);
  delay(200);

}
/*SE regula lalumininosidad del LED con el potenciometro*/
