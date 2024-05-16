#include <stdio.h>

int main(int argc, char **argv) {
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};

	arr[3] = 2;

	printf("%d\n", arr[3]);

	return 0;
}
