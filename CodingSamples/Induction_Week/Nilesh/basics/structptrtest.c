#include<stdio.h>
struct Employee
{
	int eid;
	double sal;
	double comm;
	int age;
};

void PrintEmployee(struct Employee);
void PrintEmployee(struct Employee e)
{
	printf("Print Employee Details\n");
	printf("==========================\n");
	printf("Id = %d\n", e.eid);
	printf("Salary = %lf\n", e.sal);
	printf("Age = %d\n", e.age);
}
int main()
{
  
  struct Employee emp;
  struct Employee emp1 = {102, 30000, 4000, 23};
  emp.eid = 101;
  emp.sal = 20000;
  emp.comm = 5000;
  emp.age = 22;

  PrintEmployee(emp);
  PrintEmployee(emp1);

  return 0;

}
