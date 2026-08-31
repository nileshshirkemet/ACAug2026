#include<stdio.h>
#include<string.h>
struct Student
{
	int rollno;
	char name[50];
	float marks;
};

int main()
{
 struct Student s1;
 printf("Enter the roll no");
 scanf("%d",&s1.rollno);
 printf("Enter name");
 scanf("%s",&s1.name);
 printf("Enter marks");
 scanf("%f",&s1.marks);

 printf("Student details");
 printf("Rollno:%d\n",s1.rollno);
 printf("Name:%s\n",s1.name);
 printf("Marks:%f\n",s1.marks);

 return 0;
}
