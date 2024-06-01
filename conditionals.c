#include <stdio.h>

int main () {
	
	int temp;

	printf("What's the temp?\n");
	scanf("%d", &temp);

	if (temp >= 70) {
		printf("Hot\n");
	} else if (temp >= 30 && temp < 70) {	
		printf("mild\n");
	} else {
		printf("cold\n");
	}

	return 0;
}
