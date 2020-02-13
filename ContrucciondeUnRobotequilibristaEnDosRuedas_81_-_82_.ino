


/* TRANSCRITO   POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 5º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:CONTRUCCION DE UN ROBOT EQUILIBRISTA EN 2 RUEDAS
  PAGINA 81- 82 DEL TEXTO*   */
 #include <MPU6050_tockn.h>
 #include <Wire.h>
 MPU6050 mpu6050(Wire);
 #include <PID_v1.h>
 double sp, setpoint, input, in, out, output;
int sal1,sal2, val;
double Kp = 20;
double Ki = 5;
double Kd = 50;
PID pendulo(& in, &out, &sp, Kp, Ki, Kd, DIRECT);
int Y = 12; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Wire.begin();
mpu6050.begin();
mpu6050.calcGyroOffsets(true);
delay(40);
setpoint = Y;
sp = 0;
Serial.print(sp);
pendulo.SetSampleTime(20);
pendulo.SetMode(AUTOMATIC);
pendulo.SetOutputLimits(-255,255);
}

void loop() {
  // put your main code here, to run repeatedly:
mpu6050.update();
Serial.print("angleX: "); 
Serial.println(mpu6050.getAngleX());
  Serial.print("\tangleY: "); 
  Serial.println(mpu6050.getAngleY());
  Serial.print("\tangleZ: "); 
  Serial.println(mpu6050.getAngleZ());
Y = mpu6050.getAngleY();
input = Y;
val = setpoint-input;
in = val;
pendulo.Compute();
if(abs(val)>0){
  if(val>0){
    sal1 = 5;
    sal2 = 9;
    analogWrite(3, 0);
    analogWrite(6, 0);
  }
  else{
   sal1 = 3;
    sal2 = 6;
    analogWrite(5, 0);
    analogWrite(9, 0); 
  }
  output = abs(out);
  analogWrite(sal1, output);
  analogWrite(sal2, output);
}
else{
  analogWrite(3, 0);
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(9, 0);
}
delay(60);
}
