#include <stdio.h>

int main() {
  
  int x = 3;
  
  int *pX = &x;

  printf("%d\n", *pX);
  printf("%p\n", pX);

  return 0;
}
