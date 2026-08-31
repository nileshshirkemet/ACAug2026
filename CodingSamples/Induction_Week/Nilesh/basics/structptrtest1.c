#include<stdio.h>
struct Employee
{
	int eid;
	double sal;
	double comm;
	int age;
};

void PrintEmployee(const struct Employee*);
void InitEmployee(struct Employee*);
void PrintEmployee(const struct Employee* e)
{
	printf("Print Employee Details\n");
	printf("==========================\n");
	printf("Id = %d\n", e->eid);
//	e->sal = 50000;
	printf("Salary = %lf\n", e->sal);
	printf("Age = %d\n", e->age);
}
void InitEmployee(struct Employee* e)
{
   printf("Enter Id/Sal/Comm/Age for the employee\n");
   scanf("%d %lf %lf %d", &((*e).eid), &e->sal, &e->comm, &e->age);
   printf("%d %lf %lf %d\n", e->eid, e->sal, e->comm, e->age);
}
int main()
{
  struct Employee emp, emp1;
  InitEmployee(&emp);
  InitEmployee(&emp1);
  PrintEmployee(&emp);
  PrintEmployee(&emp1);

  printf("Modified Sal : %lf \n", emp.sal);
  return 0;
}
