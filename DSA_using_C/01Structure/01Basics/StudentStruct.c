#include <stdio.h>
#include <stdlib.h>

typedef struct Student Student;

struct Student
{
	int rno;
	char name[10];
	float per;
};



int main()
{
	Student S = {101, "AAA", 95.88};

	printf("%d %s %.2f\n", S.rno, S.name, S.per);

	return 0;
}