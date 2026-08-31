#include<stdio.h>

union Student
{
 int rollNo;
 float marks;
 char grade;
};

int main()
{
 union Student s;
 s.rollNo=100;
 s.marks=100.50000;
 s.grade='A';
 printf("Rollno:%d\n",s.rollNo);
 printf("Marks:%.2f\n",s.marks);
 printf("Grade:%c\n",s.grade);
 return 0;
}

