
#include <stdio.h>
#include <string.h>

// Define a Car struct with make and year
struct Car {
  int year;
  char make[40];
};

// 1) Write a function that accepts a Car parameter (by copy)
void acceptCar(struct Car c) {
  // Inside the function, print make and year
  printf("Year: %d\n", c.year);
  printf("Make: %s\n", c.make);
}
// 2) Write a function that accepts a Car parameter (by reference = optimized)
void acceptCarBetter(struct Car *c) {
  // NOTE:
  /*
  The function accepts a pointer that points to memory-address
  Arrow notation '->' is a way to dereference and using dot notation.
  */

  // Inside the function, print make and year
  printf("Year: %d\n", c->year);
  printf("Make: %s\n", c->make);
}

int main() {
  // Create a Car value and call the function 1
  struct Car myCar;
  myCar.year = 2016;
  strcpy(myCar.make, "BMW");
  acceptCar(myCar);

  // call the function 2
  struct Car myBetterCar;
  myBetterCar.year = 2026;
  strcpy(myBetterCar.make, "Mercedes");

  struct Car *p = &myBetterCar;
  acceptCarBetter(p);

  return 0;
}
