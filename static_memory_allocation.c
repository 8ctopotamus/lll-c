#include <stdio.h>
#include <stdlib.h>
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
  
  int n = 4;

  struct employee_t *employees = malloc(sizeof(struct employee_t) * n);

  if (employees == NULL) {
    printf("The allocator failed\n");
    return -1;
  }

  initialize_employee(&employees[0]);

  printf("%d\n", employees[0].income);

  free(employees);
  employees = NULL;

  return 0;
}
