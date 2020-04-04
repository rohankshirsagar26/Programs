#include<stdio.h>
#include<stdlib.h>

int main7()
{
	int x;
	printf("\nEnter an Year = ");
	scanf("%d",&x);
	if((x%4==0&&(x%100)!=0)||x%400==0)
	{
		printf("\nNumber of Days in year %d are 366",x);
	}
	else
	{
		printf("\nNumber of Days in year %d are 365",x);
	}															//b

	(x%4==0&&(x%100)!=0)||x%400==0?printf("\nNumber of Days in year %d are 366",x):printf("\nNumber of Days in year %d are 365",x);//c
	return 0;
}
