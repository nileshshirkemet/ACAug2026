#include<stdio.h>

struct Student
{
 int rollNo;
union {
 int marks;
} performance;
};
int main()
{
struct Student s1;
s1.rollNo=21;
printf("%d\n",s1.rollNo);

s1.performance.marks=91;
printf("%d",s1.performance.marks);
return 0;
}
