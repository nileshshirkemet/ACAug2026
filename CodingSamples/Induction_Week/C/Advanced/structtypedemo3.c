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
void InitialiseStudent(stud*);

void InitialiseStudent(stud* s)// stud s
{
		printf("Enter Student Rollno / Age / Fees for Student \n");
		scanf("%d %hd %lf", &((*s).rollno), &(s->age), &(s->fees));
		//scanf("%d %hd %lf", &s.rollno, &s.age, &s.fees);
}



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
		InitialiseStudent(&s[i]);
	}

	/*
    PrintStudent(s1);
    PrintStudent(s2);
    PrintStudent(s3);
	*/

	PrintAllStudents(s, 3);
	return 0;

}







