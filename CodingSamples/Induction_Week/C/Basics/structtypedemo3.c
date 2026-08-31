#include <stdio.h>
// type => int, float, double
struct Student
{
	int rollno;
	short int age;
	double fees;
};

typedef struct Student stud;

void PrintStudent(stud);
void PrintAllStudents(stud[], int);

void PrintStudent(stud s)
{
    printf("Displaying Student Information\n");
	printf("Rollno : %d\n", s.rollno);
	printf("Age : %hd\n", s.age);
	printf("Fees : %lf\n", s.fees);
}

void PrintAllStudents(stud s[], int size)
{
    printf("Printing All Students Data\n");

	for(int i = 0; i < size; i++)
	{
		PrintStudent(s[i]);
	}

}

int main()
{
	stud s[3];
   
    for(int i = 0; i < 3; i++)
	{
		printf("Enter Student Rollno / Age / Fees for Student %d\n", i+1);
		scanf("%d %hd %lf", &s[i].rollno, &s[i].age, &s[i].fees);
	}

	/*
    PrintStudent(s1);
    PrintStudent(s2);
    PrintStudent(s3);
	*/

	PrintAllStudents(s, 3);
	return 0;

}







