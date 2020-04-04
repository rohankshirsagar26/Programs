#include<stdio.h>
#include<stdlib.h>

int main7()
{
	int x;
	printf("Enter a four digit number = ");
	scanf("%d",&x);
	if(x<10000&&x>999)
	{
		printf("\n%d\t%d\t%d\t%d",(x/1000),((x/100)%10),((x/10)%10),(x%10));
		printf("\n\n%d = %d + %d + %d + %d",x,(x/1000)*1000,((x/100)%10)*100,((x/10)%10)*10,x%10);
		printf("\n\n%d%d%d%d",(x%10),((x/10)%10),((x/100)%10),(x/1000));
	}
	else
	{
		printf("\n%d is not a Four Digit Number",x);
	}
	return 0;
}
