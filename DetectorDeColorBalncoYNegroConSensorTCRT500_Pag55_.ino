/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 4º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: DETECTOR DE COLOR BLANCO Y NEGRO CON SENSOR TCRT500
  PAGINA  55 DEL TEXTO*   */
#define TCRT A0
int valor, led= 7;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(TCRT, INPUT);
pinMode(led, OUTPUT);

}

void loop() {
  
  // put your main code here, to run repeatedly:
valor = analogRead(TCRT);
Serial.print(valor);
Serial.print(" | Color:  ");
if(valor < 800){
  Serial.println("Blanco");
  digitalWrite(7, HIGH);
}
else{
  Serial.println("Negro");
  digitalWrite(7, LOW);
}
delay(50);
}
