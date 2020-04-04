#include<stdio.h>
#include<stdlib.h>

int main8()
{
	float x,y,z;
	printf("Enter first number = ");
	scanf("%f",&x);
	printf("\nEnter second number = ");
	scanf("%f",&y);
	printf("\nEnter third number = ");
	scanf("%f",&z);
	printf("\nAverage of %f, %f and %f is %f",x,y,z,((x+y+z)/3));
	return 0;
}
