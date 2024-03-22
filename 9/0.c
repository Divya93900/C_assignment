#include<stdio.h>
#include<stdlib.h>

typedef struct employee
{
	int empid;
	char name[20];
	char address[20];
	double salary;
}emp_t;

void accept_emp(emp_t *e);
void print_emp(emp_t *e);

int main(void)
{
	//emp_t arr[3];
	emp_t *arr = (emp_t *)malloc(3 * sizeof(emp_t));
	
	for(int i = 0 ; i < 3 ; i++)
		accept_emp(&arr[i]);

	printf("Employee details : \n");
	for(int i = 0 ; i < 3 ; i++)
		print_emp(&arr[i]);

	free(arr);

	return 0;
}

void accept_emp(emp_t *e)
{
 int i;
	printf("Enter Employee details (empid, name, address, salary) : ");
	scanf("%d %s %s %lf", &e[i].empid, e[i].name, e[i].address, &e[i].salary);
}

void print_emp(emp_t *e)
{
	printf("%-4d %-20s %-20s %.2lf\n", e->empid, e->name, e->address, e->salary);
}




