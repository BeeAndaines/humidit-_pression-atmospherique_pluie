# humidité_pression-atmospherique_pluie_température

des capteurs 
TSL 2561  pour luminosité et ???
SI70   pour température et humidité de l'air 
GY-BM280 pour la pression atmosphérique (et l'altitude ??)
BME280 pour la pression atmosphérique, humidité et température (à la place de BMP et à utiliser avec la librairie Cactus)
FC37 avec module???? pour la pluie
serviront pour mesurer la pression atmosphérique 
l'humidité de l'air
la pluie

Temp:22.12C, Humidity:63.45% T=-141.51Â°C P=ovfmBar A=-180058960.00m Rain=255   
obtenu avec le programme baro de jody
  

Cellule de charge et ampli hx711
permet à partir d'un jauge d econtrainte, d'avoir accés a la moyenne des masses
cf: https://github.com/bogde/HX711.git
 // parameter "gain" is ommited; the default value 128 is used by the library
  // HX711.DOUT  - pin #A1
  // HX711.PD_SCK - pin #A0
*/

#include "HX711.h"
