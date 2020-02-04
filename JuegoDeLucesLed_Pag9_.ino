/* TRANSCRITO  POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3º (SECUNDARIA COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA: JUEGO DE LUCES LED
  PAGINA 9 DEL TEXTO*   */
  const int ledPIN =3, ledPIN2=7, ledPIN3=11;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPIN, OUTPUT);
pinMode(ledPIN2, OUTPUT);
pinMode(ledPIN3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  char option = Serial.read();
  if(option >= '1' && option <= '9'){
    option = '0';
    for(int i=0; i<option; i++){
      digitalWrite(ledPIN, HIGH);
      digitalWrite(ledPIN2, HIGH);
      digitalWrite(ledPIN3, HIGH);
      delay(100);
      digitalWrite(ledPIN, LOW);
      digitalWrite(ledPIN2, LOW);
      digitalWrite(ledPIN3, LOW);
      delay(200);
    }
  }
}
}
