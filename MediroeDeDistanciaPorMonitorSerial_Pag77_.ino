/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 2 (SECUNDARI COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: MEDIDOR DE DISTANCIA POR MONITOR SERIAL
   *  PAGINA 77 DEL TEXTO*   */
long tiempo;
long distancia;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(8, INPUT);
pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9, LOW);
delayMicroseconds(5);
digitalWrite(9, HIGH);
delayMicroseconds(10);
tiempo=pulseIn(8, HIGH);
distancia= int(00017*tiempo);
Serial.println(distancia);
delay(1000);

}
