#include <stdio.h>

// create a structure named 'struct Employee'
// it should have a name, and an age
struct Employee {
  char name[64];
  int age;
};

int main(int argc, char **argv) {

  // Initialize an employee, name him "Steve"
  // Steve is 42
  struct Employee steve = { "Steve", 42 }; 

  // print his name and age
  printf("%s, age %d years\n", steve.name, steve.age); 

  return 0;
}
