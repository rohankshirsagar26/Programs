#include<stdio.h>
#include<stdlib.h>

int main3()
{
	int x;
	printf("\nEnter a number = ");
	scanf("%d",&x);

	if(x>0)
	{
		printf("\n%d is Positive",x);
	}
	else if(x<0)
	{
		printf("\n%d is Negative",x);
	}
	else
	{
		printf("\nEntered number is zero");
	}
	return 0;
}
