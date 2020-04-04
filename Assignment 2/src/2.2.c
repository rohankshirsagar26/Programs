#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int x;
	printf("\nEnter a Number = ");
	scanf("%d",&x);

	if(x%2==0)
	{
		printf("\n%d is a Even Number",x);
	}
	else
	{
		printf("\n%d is a Odd Number",x);
	}
	return 0;
}
