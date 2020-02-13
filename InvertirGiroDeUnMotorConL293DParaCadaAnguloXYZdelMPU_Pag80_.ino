
/* TRANSCRITO   POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 5º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:INVERTIR GIRO DEL MOTOR CON L293D PARA ANGULO Z,Y, Z DEL MPU
  PAGINA 80 DEL TEXTO*   */
  #include <MPU6050_tockn.h>
  #include<Wire.h>
  MPU6050 mpu6050(Wire);
  long timer = 0;
  
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
Wire.begin();
mpu6050.begin();
mpu6050.calcGyroOffsets(true);
}

void loop() {
  // put your main code here, to run repeatedly:
mpu6050.update();
if(millis() - timer> 1000){
  Serial.println("============================================================");
  Serial.print("temp: "); Serial.println(mpu6050.getTemp());
  Serial.print("accx: "); Serial.println(mpu6050.getAccX());
  Serial.print("\taccY: "); Serial.println(mpu6050.getAccY());
  Serial.print("\taccZ: "); Serial.println(mpu6050.getAccZ());
  Serial.print("gyroX: "); Serial.println(mpu6050.getGyroX());
  Serial.print("\tgyroY: "); Serial.println(mpu6050.getGyroY());
  Serial.print("\tgyroZ: "); Serial.println(mpu6050.getGyroZ());
  Serial.print("accAngleX: "); Serial.println(mpu6050.getAccAngleX());
  Serial.print("\tzccAngleY: "); Serial.println(mpu6050.getAccAngleY());
  Serial.print("gyroAngleX: "); Serial.println(mpu6050.getGyroAngleX());
  Serial.print("gyroAngleY: "); Serial.println(mpu6050.getGyroAngleY());
  Serial.print("gyroAngleZ: "); Serial.println(mpu6050.getGyroAngleZ());
  Serial.print("angleX: "); Serial.println(mpu6050.getAngleX());
  Serial.print("\tangleY: "); Serial.println(mpu6050.getAngleY());
  Serial.print("\tangleZ: "); Serial.println(mpu6050.getAngleZ());
  Serial.println("============================================================");
  timer  = millis();
  
}
if(mpu6050.getAngleX()>10){
  digitalWrite(12, 1);
  digitalWrite(13, 0);
  
}
if(mpu6050.getAngleX()<10){
  digitalWrite(12, 0);
  digitalWrite(13, 1);
  
}
if(mpu6050.getAngleY()>10){
  digitalWrite(12, 1);
  digitalWrite(13, 0);
  
}
if(mpu6050.getAngleY()<10){
  digitalWrite(12, 0);
  digitalWrite(13, 1);
  
}
if(mpu6050.getAngleX()>10){
  digitalWrite(12, 1);
  digitalWrite(13, 0);
  
}
if(mpu6050.getAngleX()<10){
  digitalWrite(12, 0);
  digitalWrite(13, 1);
  
}
}
