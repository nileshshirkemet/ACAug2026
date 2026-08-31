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

void PrintStudent(stud s)
{
    printf("Displaying Student Information\n");
	printf("Rollno : %d\n", s.rollno);
	printf("Age : %hd\n", s.age);
	printf("Fees : %lf\n", s.fees);
}

int main()
{
	stud s1;
	stud pq[10];

	printf("Enter Student Rollno / Age / Fees\n");
	scanf("%d %hd %lf", &s1.rollno, &s1.age, &s1.fees);
    stud s2 = {102, 26, 55555};
    stud s3;
    s3.rollno = 103;
	s3.age = 24;
	s3.fees = 55555;

    PrintStudent(s1);
    PrintStudent(s2);
    PrintStudent(s3);
	return 0;

}







