/* TRANSCRITO POR GUSTAVO JARRO CALLIZAYA*/ 
 /*DEL*/
 /*TEXTO: ROBOTICA CON ARDUINO 3 (SECUNDARI COMUNITARIA PRODUCTIVA
 * ) "TECHHOME"*/
  /* PRACTICA:LETRAS EN EL DISPLAY DE 7 SEGMENTOS CATODO COMUN
   *  PAGINA 18-19 DEL TEXTO*   */
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
}
void mostrar(int a, int b, int c, int d, int e, int f, int g)
{

digitalWrite(2, a);
digitalWrite(3, b);
digitalWrite(4, c);
digitalWrite(5, d);
digitalWrite(6, e);
digitalWrite(7, f);
digitalWrite(8, g);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  char mensaje = Serial.read();
  switch(mensaje)
  {
    case 'A':
    mostrar(1,1,1,0,1,1,1);
    break;
    case 'B':
    mostrar(0,0,1,1,1,1,1);
    break;
    case 'C':
    mostrar (1,0,0,1,1,1,0);
    break;
    case 'D':
    mostrar(0,1,1,1,1,0,1);
    break;
    case 'E':
    mostrar(1,0,0,1,1,1,1);
    break;
    case 'F':
    mostrar(1,0,0,0,1,1,1);
    break;
    case 'G':
    mostrar(1,0,1,1,1,1,1);
    break;
   case 'H':
    mostrar(0,1,1,0,1,1,1);
    break;
  }
  }
  
  }
