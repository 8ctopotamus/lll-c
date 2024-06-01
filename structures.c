#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 32

struct employee_t {
	int id;
	char firstname[64];
	char lastname[64];
	float income;
	bool ismanager;
};

int main() {
	// struct employee_t Fred;
	// Fred.income = 100.00;
	// Fred.ismanager = true;

	struct employee_t employees[MAX_EMPLOYEES];
	
	int i = 0;
	for (i = 0; i < MAX_EMPLOYEES; i++) {
		employees[i].id = i;
		employees[i].income = 50000;
	} 
	
	return 0;
}
