#include<stdio.h>
#include<stdlib.h>

int main5()
{
	int x,y,z;
	printf("\nEnter first number = ");
	scanf("%d",&x);
	printf("\nEnter second number = ");
	scanf("%d",&y);
	printf("\nEnter third number = ");
	scanf("%d",&z);

	if(x>z)
	{
		if(x>y)
		{
			printf("\n%d is Greater Number",x);
		}
		else
		{
			printf("\n%d is Greater Number",y);
		}
		//(x>y)?printf("\n%d is Greater Number",x):printf("\n%d is Greater Number",y);
	}
	else
	{
		if(y>z)
		{
			printf("\n%d is Greater Number",y);
		}
		else
		{
			printf("\n%d is Greater Number",z);
		}
		//(y>z)?printf("\n%d is Greater Number",y):printf("\n%d is Greater Number",z);
	}
	//(x>z)?(x>y)?printf("\n%d is Greater Number",x):printf("\n%d is Greater Number",y):(y>z)?printf("\n%d is Greater Number",y):printf("\n%d is Greater Number",z);
	printf("\n%d is Greater Number",(x>z)?(x>y)?x:y:(y>z)?y:z);
	return 0;
}
