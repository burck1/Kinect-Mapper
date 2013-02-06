// @reference http://arduino.cc/en/Guide/ArduinoDue for DUE stuff
// @reference http://bit.ly/VoBkia for X2 encoding
// @reference http://mbed.org/cookbook/QEI for QEI Library
// @reference http://mbed.org/users/aberk/code/RS-EDP-RDS-Rover/ for rover library

#include <QEI.h>

void setup()
{
  QEI leftWheel (p29, p30, NC, 624);
  QEI rightWheel (p31, p32, NC, 624);
}

void loop()
{
  
}
