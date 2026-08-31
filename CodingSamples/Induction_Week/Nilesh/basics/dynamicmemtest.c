#include <stdio.h>
#include <malloc.h>
struct Employee
{
	int eid;
	double sal;
	double comm;
	int age;
};

typedef struct Employee Emp;

void PrintEmployee(Emp*);
void PrintEmployee(Emp* e)
{
	printf("Printing Employee Details\n");
	printf("===========================\n");
	printf("Id is %d\n", e->eid);
	printf("Salary is %lf\n", e->sal);
	printf("Comm is %lf\n", e->comm);
	printf("Age is %d\n", e->age);
}

int main()
{
    Emp e = {101, 30000, 4000,22};
    Emp* e1 = malloc(sizeof(Emp));
	e1->eid = 102;
	e1->sal = 20000;
	e1->comm = 5000;
	e1->age = 25;
    PrintEmployee(e1);
    free(e1);  //Free the memory
    PrintEmployee(&e);

    return 0;
}
