#include<stdio.h>
#include<stdlib.h>

int main2s()

{
	int choice;
	float x,y;
	printf("*****CALCULATOR*****");

	do
	{
		printf("\n\nEnter first number = ");
		scanf("%f",&x);
		printf("\nEnter second number = ");
		scanf("%f",&y);
		printf("\n\n0.EXIT\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
		printf("\n\nSelect your choice = ");
		scanf("%d",&choice);

		switch(choice)
		{
		case 0:
			break;
		case 1:
			printf("\nAddition of %0.2f and %0.2f = %0.2f",x,y,x+y);
			break;
		case 2:
			printf("\nSubtraction of %0.2f and %0.2f = %0.2f",x,y,x-y);
			break;
		case 3:
			printf("\nMultiplication of %0.2f and %0.2f = %0.2f",x,y,x*y);
			break;
		case 4:
			y==0?printf("\nA number cannot be divided by 0"):printf("\nDivision of %0.2f and %0.2f = %0.2f",x,y,x/y);
			break;
		default:printf("\nInvalid Input");
		}
	}while(choice!=0);
	return 0;
}
