#include<stdio.h>
#include<stdlib.h>

int main()
{
	int eid,dno;
	char dcode;
	printf("\nEnter Details Below : ");
	printf("\nEmployee id = ");
	scanf("%d",&eid);
	printf("\nDepartment Number = ");
	scanf("%d",&dno);
	printf("\nDesignation Code = ");
	getchar();
	fflush(stdin);
	scanf("%c",&dcode);

	switch(dno)
	{
	case 10:
		printf("\nThe employee with employee id %d is working in ""Marketing"" department as ",eid);
		break;
	case 20:
		printf("\nThe employee with employee id %d is working in ""Management"" department as ",eid);
		break;
	case 30:
		printf("\nThe employee with employee id %d is working in ""Sales"" department as ",eid);
		break;
	case 40:
		printf("\nThe employee with employee id %d is working in ""Designing"" department as ",eid);
		break;
	default:printf("\nInvalid input\nEnter department number as 10,20,30 or 40");
	}

	switch(dcode)
	{
	case 'M':
		printf("Manager");
		break;
	case 'S':
		printf("Supervisor");
		break;
	case 's':
		printf("Security Officer");
		break;
	case 'C':
		printf("Clerk");
		break;
	default:printf("\nInvalid input\nEnter designation code as M, S, s or C");
	}

	return 0;
}
