#include "SparkFun_Si7021_Breakout_Library.h"
#include <Wire.h>

//branchement du SI70 5V, GND, SCL en A5, SDA en A4 
Weather sensor;

float humidity = 0;
float tempf = 0;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
sensor.begin();
 
}

void loop() {
  // put your main code here, to run repeatedly:
  // lecture des 2 valeurs du capteur SI70:
    humidity = sensor.getRH();
     tempf = sensor.getTemp();
  
  //affichage des valeurs
  Serial.print("Temp:");
  Serial.print(tempf);
  Serial.print("C, ");

  Serial.print("Humidity:");
  Serial.print(humidity);
  Serial.println("%");
  
  delay(1000);
}
