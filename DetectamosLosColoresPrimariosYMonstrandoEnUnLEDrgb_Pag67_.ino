/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 4º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: DETECTAMOS LOS COLORES PRIMARIOS Y MOSTRARLOS EN UN LED RGB
  PAGINA  67 DEL TEXTO*   */
  const int s0 = 8;
  const int s1 = 9;
  const int s2 = 12;
  const int s3 = 11;
  const int out = 10;
  byte colorRojo = 0;
  byte colorVerde = 0;
  byte colorAzul = 0;
  
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(s0, OUTPUT);
pinMode(s1, OUTPUT);
pinMode(s2, OUTPUT);
pinMode(s3, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(out, INPUT);
digitalWrite(s0, HIGH);
digitalWrite(s1, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
getColor();
/*Serial.print("Rojo: ");
Serial.print(colorRojo, DEC);
Serial.print("Verde: ");
Serial.print(colorVerde, DEC);
Serial.print("Azul: ");
Serial.print(colorAzul, DEC);*/
if( colorRojo < colorAzul && colorVerde> 100 && colorRojo < 80){
  digitalWrite(2, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(2, LOW);
}

else if(colorAzul < colorRojo && colorAzul < colorVerde){
  digitalWrite(2, LOW);
  digitalWrite(2, LOW);
  digitalWrite(2, HIGH);
}
else if(colorVerde < colorRojo && colorVerde < colorAzul)
{
  digitalWrite(2, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(2, LOW);
}
else{
  digitalWrite(2, LOW);
  digitalWrite(2, LOW);
  digitalWrite(2, LOW);
}
delay(300);
}
void getColor(){
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  colorRojo = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  digitalWrite(s3, HIGH);
  colorAzul = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  digitalWrite(s2, HIGH); 
   colorVerde = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
}
