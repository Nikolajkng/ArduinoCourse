#include <stdio.h>
#include <string.h>

int main() {

  // Define a Sensor struct with a name field
  struct Sensor {
    char name[20];

    // Inside Sensor, include a union with temperature, humidity, status
    union measurements {
      float temp;
      float humid;
      char status[20];
    } measurements;
  };

  // Create a Sensor value
  struct Sensor mySen;
  strcpy(mySen.name, "TMP36");

  // Store a temperature value in the union
  mySen.measurements.temp = 20;

  // Print the sensor name and temperature
  printf("Name: %s\n", mySen.name);
  printf("Temp: %f\n", mySen.measurements.temp);

  return 0;
}
