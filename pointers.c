#include <stdio.h>
#include <stdbool.h>

struct employee_t {
  int id;
  int income;
  bool staff;
};

void initialize_employee(struct employee_t *e) {
  e->id = 0;
  e->income = 0;
  e->staff = false;
  return;
}

int main() {
  
  int x = 3;
  int *pX = &x;

  printf("%d\n", *pX);
  printf("%p\n", pX);

  struct employee_t Ralph;
  initialize_employee(&Ralph);
  printf("Ralph's income: %d\n", Ralph.income);

  return 0;
}
