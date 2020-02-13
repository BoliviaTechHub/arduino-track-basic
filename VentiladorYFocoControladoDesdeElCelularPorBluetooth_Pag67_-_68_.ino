
/* TRANSCRITO   POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 6º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:VENTILADOR Y FOCO CONTROLADO DESDE EL CELULAR BLUETOOTH
  PAGINA 67 - 68 DEL TEXTO*   */
char entrada;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
  entrada = Serial.read();
  if(entrada == 'F')
  {
    digitalWrite(2,1);
    }
  if(entrada == 'V'){
    digitalWrite(3, 1);
  }
   if(entrada == 'Q'){
    digitalWrite(2, 0);
  }
   if(entrada == 'S'){
    digitalWrite(3, 0);
  }
  }
  
}
