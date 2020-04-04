#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int x;
	printf("\nEnter a number = ");
	scanf("%d",&x);
	printf("\nEntered number is character format = %c",x);
	printf("\nEntered number is decimal format = %d",x);
	printf("\nEntered number is octal format = %o",x);
	printf("\nEntered number is hex format = %x",x);

	return 0;
}
