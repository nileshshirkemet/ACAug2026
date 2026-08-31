#include<stdio.h>

struct Stud
{
 int rollNo;
 float marks;
 char grade;
};

union Data
{
 int rollNo;
 float marks;
 char grade;
};

int main()
{
printf("Size of Structure= %lu",sizeof(struct Stud));
printf("Size of Union= %lu",sizeof(union Data));
return 0;
}
