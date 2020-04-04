#include <stdio.h>
#include <stdlib.h>

int main1(void)
{
	int x,y;
	printf("\nEnter first number = ");
	scanf("%d",&x);
	printf("\nEnter second number = ");
	scanf("%d",&y);

	printf("\nSum of %d and %d = %d",x,y,x+y);
	printf("\nDifference of %d and %d = %d",x,y,x-y);
	printf("\nProduct of %d and %d = %d",x,y,x*y);

	return 0;
}
