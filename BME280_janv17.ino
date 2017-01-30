#include <Wire.h>


#include "cactus_io_BME280_I2C.h"

// Créer un objet BME280
//BME280_I2C bme; // I2C en utilisant l'adresse 0x77
BME280_I2C bme (0x76); // I2C en utilisant l'adresse 0x76

void setup () {

Serial.begin (9600);
Serial.println ("Bosch BME280 Pression - Humidite - Capteur de temperature | cactus.io");

if (!bme.begin()) {
Serial.println ( " Impossible de trouver un capteur BME280 valide, vérifiez le câblage!" );
while (1);
}
Serial.println("BME initialise avec succes!");
bme.setTempCal (-1); // Temp était en lecture haute pour soustraire 1 degré

Serial.println ("Pression mbar hPa \ Humidite \ Temperature ");
}

void loop () {

bme.readSensor ();

Serial.print (bme.getPressure_MB ()); Serial.print (" mb " ); // Pression en millibars
Serial.print (bme.getPressure_HP ()); Serial.print (" hPa " );
Serial.print (bme.getHumidity ()); Serial.print ( "% " );
Serial.print (bme.getTemperature_C ()); Serial.println ( "C " );
// Ajouter un délai de 2 secondes.
delay (2000); // juste ici pour ralentir la sortie.
}
