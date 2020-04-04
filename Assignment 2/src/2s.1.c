#include<stdio.h>
#include<stdlib.h>

int main1s()
{
	int x,choice;
	printf("\nEnter Year = ");
	scanf("%d",&x);
	printf("\n1.January\n2.February\n3.March\n4.April\n5.May\n6.June\n7.July\n8.August\n9.September\n10.October\n11.November\n12.December");
	printf("\nSelect Month = ");
	scanf("%d",&choice);

	switch(choice)
	{
	case 0:
		break;
	case 1:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		printf("\nNumber of days in January = 31");
		break;
	case 2:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of days in February = 29"):printf("\nNumber of days in February = 28");
		break;
	case 3:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		printf("\nNumber of days in March = 31");
		break;
	case 4:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		printf("\nNumber of days in April = 30");
		break;
	case 5:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		printf("\nNumber of days in May = 31");
		break;
	case 6:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		printf("\nNumber of days in June = 30");
		break;
	case 7:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		printf("\nNumber of days in July = 31");
		break;
	case 8:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		printf("\nNumber of days in August = 31");
		break;
	case 9:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		printf("\nNumber of days in September = 30");
		break;
	case 10:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		printf("\nNumber of days in October = 31");
		break;
	case 11:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		printf("\nNumber of days in November = 30");
		break;
	case 12:
		((x%4==0&&(x%100)!=0)||(x%400==0))?printf("\nNumber of Days in %d = 366",x):printf("\nNumber of Days in %d = 365",x);
		printf("\nNumber of days in December = 31");
		break;
	default:printf("\nInvalid Input");
	}
	return 0;
}
