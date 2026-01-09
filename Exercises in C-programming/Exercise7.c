#include <stdio.h>
#include <string.h>

int main() {

  // Define a union Data with members for int, float, and char
  union Data {
    int number;
    float fraction;
    char letter;
  };

  // Create one Data variable
  union Data d;

  // Store an int, then print it
  d.number = 2;
  printf("%d\n", d.number);

  // Store a float in the same union, then print it
  d.fraction = 0.54;
  printf("%f\n", d.fraction);

  // Note what happens to the earlier value
  printf("%d\n", d.number);
  /* 
  The union shares the same memory allocation for all members.
  When one member is assigned a value and occupies the memeory,
  it will overwrite anything previously stored in memory.
  */


  return 0;
}
