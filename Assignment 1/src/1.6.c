#include<stdio.h>
#include<stdlib.h>

int main6()
{
	int x,i;
	printf("\nEnter a number = ");
	scanf("%d",&x);
	printf("\nTable of %d",x);
	printf("\n");
	for(i=1; i<=10; i++)
	{
		printf("\n%d",x*i);
	}
	return 0;
}
