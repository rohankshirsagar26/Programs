#include<stdio.h>
#include<stdlib.h>

int main4()
{
	int x,y;
	printf("\nEnter first number = ");
	scanf("%d",&x);
	printf("\nEnter second number = ");
	scanf("%d",&y);

	if(x>y)
	{
		printf("\n%d is Greater Number",x);
	}
	else
	{
		printf("\n%d is Greater Number",y);
	}

	x>y?printf("\n%d is Greater Number",x):printf("\n%d is Greater Number",y);

	return 0;
}
