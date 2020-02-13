
/* TRANSCRITO y CORREGIDO  POR GUSTAVO JARRO CALLIZAYA*/
/*DEL*/
/*TEXTO: ROBOTICA CON ARDUINO 5º (SECUNDARIA COMUNITARIA PRODUCTIVA
  ) "TECHHOME"*/
/* PRACTICA:MOSTRANDO DATOS X, Y ,Z CON MPU 6050 POR EL MONITOR SERIAL
  PAGINA 79 DEL TEXTO*   */
  #include "I2Cdev.h"
  #include "MPU6050.h"
  #include "Wire.h"
  MPU6050 sensor;
  int ax, ay, az;
  int gx, gy, gz;
  
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Wire.begin();
sensor.initialize();
if(sensor.testConnection()) Serial.println("Sensor iniciado correctamente");
else Serial.println("Error al iniciar el sensor");
}

void loop() {
  // put your main code here, to run repeatedly:
sensor.getAcceleration(&ax, &ay, &az);
sensor.getRotation(&gx, &gy, &gz);
Serial.print("a[x y z] g[x y z] :\t");
Serial.print(ax); Serial.print("\t");
Serial.print(ay); Serial.print("\t");
Serial.print(az); Serial.print("\t");
Serial.print(gx); Serial.print("\t");
Serial.print(gy); Serial.print("\t");
Serial.print(gz);
delay(100);
}
