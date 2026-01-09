#include <stdio.h>
#include <string.h>

int main() {

  // Define a Student struct with name, age, grade
  struct Student {
    int age;
    int grade;
    char name[20]; // String is a set of chars
  };

  // Create one Student variable
  struct Student myStudent;

  // Fill in each field
  myStudent.age = 23;
  myStudent.grade = 12;
  strcpy(myStudent.name, "Hector");

  // Print the fields using dot notation
  printf("Name: %s\n", myStudent.name);
  printf("Age: %d\n", myStudent.age);
  printf("Grade: %d\n", myStudent.grade);

  return 0;
}
