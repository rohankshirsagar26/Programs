#include <stdio.h>
#include <stdlib.h>

int main1(void)
{
	float x,y;
	printf("Enter Numerator = ");
	scanf("%f",&x);
	printf("Enter Denominator = ");
	scanf("%f",&y);

	if(y==0)
	{
		printf("\nNumber cannot be divisible by 0");
	}
	else
	{
		printf("\n%.2f",x/y);
	}
	return 0;
}
