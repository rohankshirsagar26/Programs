#include<stdio.h>
#include<stdlib.h>

int main8()
{
	float x;
	printf("\nEnter the number of quantity you want to purchase = ");
	scanf("%f",&x);
	if(x>0)
	{
		if(x<31)
		{
			printf("\nTotal Price = %0.2f",x*5);
		}
		else if(x>30&&x<51)
		{
			printf("\nTotal Price = %0.2f",x*5*0.90);
		}
		else
		{
			printf("\nTotal Price = %0.2f",x*5*0.85);
		}

	}
	else
	{
		printf("\nInvalid Input");
	}
	return 0;
}
