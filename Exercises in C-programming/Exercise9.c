#include <stdio.h>
#include <string.h>

int main() {

  // Define a union Conversion with a float member
  // Add a 4-byte array member to the same union
  union Conversion {
    float data;    // 4-byte float
    unsigned char array[4]; // 4-byte array
  };

  // Store a float value in the union
  union Conversion conv;
  conv.data = 126.7;

  // Print the float
  printf("Data: %f\n", conv.data);

  // Print each byte value in the array in hex
  for (int i = 0; i < 4; i++) {
    printf("arr[%d]: %d \n", i, conv.array[i]);
  }

  return 0;
}
