#include<stdio.h>
#include<stdlib.h>

int main9()
{
	int choice;
	float c,f;
	printf("1. Celsius to Fahrenheit");
	printf("\n2. Fahrenheit to Celsius");
	printf("\n\nSelect your choice(1/2) = ");
	scanf("%d",&choice);

	if(choice==1)
	{
		printf("\nEnter temperature in Celsius = ");
		scanf("%f",&c);
		f=((9*c/5)+32);
		printf("\nTemperature in Fahrenheit = %f",f);
	}
	else if (choice==2)
	{
		printf("\nEnter temperature in Fahrenheit = ");
		scanf("%f",&f);
		c=(f-32)*5/9;
		printf("\nTemperature in Celsius = %f",c);
	}
	else
	{
		printf("\nInvalid Input");
	}
	return 0;
}
