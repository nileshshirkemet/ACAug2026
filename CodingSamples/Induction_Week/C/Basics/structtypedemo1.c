#include <stdio.h>
// type => int, float, double
struct Student
{
	int rollno;
	short int age;
	double fees;
};

int main()
{
    struct Student s1;
    s1.rollno = 102;
	s1.age = 22;
	s1.fees = 55555;

    printf("Displaying Student Information\n");
	printf("Rollno : %d\n", s1.rollno);
	printf("Age : %hd\n", s1.age);
	printf("Fees : %lf\n", s1.fees);
    return 0;

}







