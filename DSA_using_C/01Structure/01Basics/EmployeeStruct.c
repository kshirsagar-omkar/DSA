#include <stdio.h>
#include <stdlib.h>


struct Employee
{
	int employeeId;
	char employeeName[10];
	float employeeSalary;
};


int main()
{

	struct Employee E = {0, "N/A", 0.00};

	printf("Enter Employee ID : ");
	scanf("%d", &E.employeeId);
	printf("Enter Employee Name : ");
	scanf("%s", E.employeeName);
	printf("Enter Employee Salary : ");
	scanf("%f", &E.employeeSalary);

	printf("%lu : ", E);
	printf("%d %s %.2f\n\n", E.employeeId ,E.employeeName, E.employeeSalary);


	printf("Change Employee Information Using Pointer\n");
	struct Employee *P = &E;

	printf("Enter Employee ID : ");
	scanf("%d", &P->employeeId);
	printf("Enter Employee Name : ");
	scanf("%s", P->employeeName);
	printf("Enter Employee Salary : ");
	scanf("%f", &P->employeeSalary);


	printf("%lu : %d %s %.2f\n\n", P, P->employeeId ,P->employeeName, P->employeeSalary);




	printf("Creating Dynamic Employee\n");
	struct Employee *D = (struct Employee*) malloc(1 * sizeof(struct Employee));

	printf("Enter Employee ID : ");
	scanf("%d", &D->employeeId);
	printf("Enter Employee Name : ");
	scanf("%s", D->employeeName);
	printf("Enter Employee Salary : ");
	scanf("%f", &D->employeeSalary);


	printf("%lu : %d %s %.2f\n\n", D, D->employeeId ,D->employeeName, D->employeeSalary);

	free(D);


	return 0;
}