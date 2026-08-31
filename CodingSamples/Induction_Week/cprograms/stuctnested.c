#include<stdio.h>
struct Address
{
	char city[30];
	int pincode;
};
struct Student
{
	int roll;
	char name[50];
	float marks;
	struct Address a1;
};

int main()
{
 struct Student s1;
 printf("Enter roll");
 scanf("%d",&s1.roll);
 printf("Enter the name:");
 scanf("%s",&s1.name);
 printf("Enter Marks:");
 scanf("%f",&s1.marks);
 printf("Enter Address:");
 scanf("%s",&s1.a1.city);
 printf("Enter Pincode:");
 scanf("%d",&s1.a1.pincode);

printf("Student Details:::");
printf("Roll No %d\n",s1.roll);
printf("name: %s\n",s1.name);
printf("marks: %f\n",s1.marks);
printf("address:%s\n",s1.a1.city);
printf("Pincode:%d\n",s1.a1.pincode);
return 0;
}
