#include<stdio.h>
#include<stdlib.h>

int main6()
{
	int x;
	printf("\nEnter a five digit number = ");
	scanf("%d",&x);
	if(x>9999&&x<100000)
	{
		if(x/10000==x%10&&((x/1000)%10)==((x/10)%10))
		{
			printf("\n%d is Numeric Palindrome",x);
		}
		else
		{
			printf("\n%d is NOT a Numeric Palindrome",x);
		}
	}
	else
	{
		printf("\nInvalid Input");
	}
	return 0;
}
