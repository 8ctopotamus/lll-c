#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 100

// make sure no additional optimizations
// so memory is consistent between machines
__attribute__((__packed__)) struct employee_t {
	int id;
	char firstname[64];
	char lastname[64];
	float income;
	bool ismanager;
};

int main() {
	struct employee_t Fred;

	printf("Size of employee: %lu\n", sizeof(struct employee_t));
	printf("Size of employee: %lu\n", sizeof(Fred));

	return 0;
}
