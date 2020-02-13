
/* TRANSCRITO y CORREGIDO  POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 4º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:BALANCIN CON MOTOR Y HELICE CON PID
  PAGINA 80 - 81 DEL TEXTO*   */
#include <PID_v1.h>
double sp, setpoint, input, in, out, output;
int sal, val;
double Kp = 10;
double Ki = 0.5;
double Kd = 1.5;
PID pendulo(& in, &out, &sp, Kp, Ki, Kd, DIRECT);
void setup() {
  // put your setup code here, to run once:
delay(1000);
setpoint = analogRead(0);
sp = 0;
Serial.begin(9600);
Serial.print(sp);
pendulo.SetSampleTime(20);
pendulo.SetMode(AUTOMATIC);
pendulo.SetOutputLimits(-255,255);

}

void loop() {
  // put your main code here, to run repeatedly:
input = analogRead(0);
val = setpoint - input;
in = val;
pendulo.Compute();
if(abs(val)>0){
  if(val>0){
    sal =3;
    digitalWrite(11, LOW);
    
  }
  else{
    sal = 11;
    digitalWrite(3, LOW);
  }
  output = abs(out);
  analogWrite(sal, output);
  
}
else{
  digitalWrite(3, LOW);
  digitalWrite(11, LOW);
  
}
Serial.println(setpoint);
Serial.print("");
Serial.print(in);
Serial.print("");
Serial.print(output);
delay(1000);
}
