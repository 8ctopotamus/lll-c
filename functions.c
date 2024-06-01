#include <stdio.h>

int add(int x, int y) {
	return x + y;
} 

int main(int argc, char *argv[]) {

	int foo = add(1, 2);
	printf("%d\n", foo);

	return 0;
}
