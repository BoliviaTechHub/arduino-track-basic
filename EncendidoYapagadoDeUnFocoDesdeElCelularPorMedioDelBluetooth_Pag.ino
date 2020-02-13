
/* TRANSCRITO   POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 6º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:ENCENDIDO Y APAGADO DE UN FOCO DESDE E; CELULAR POR MEDIO DEL BLUETOOTH
  PAGINA 66 DEL TEXTO*   */
char entrada;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
  entrada = Serial.read();
  if(entrada == 'a')
  {
    digitalWrite(2,1);
    }
  if(entrada == 'b'){
    digitalWrite(2, 0);
  }
  }
  
  
}
