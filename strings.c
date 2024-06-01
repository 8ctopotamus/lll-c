#include <stdio.h>

#define MAX_IDS 32

int main() {
	int ids[MAX_IDS] = { 0, 1, 2 };
	
	char mystr[] = {'h', 'e', 'l', 'l', 'o', 0}; // 0 is the null terminator
	char *myotherstr = "hello"; // automatically null terminated

	printf("%s\n", mystr);
	//printf("%s\n", myotherstr);

	return 0;
}
