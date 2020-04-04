#include<stdio.h>
#include<stdlib.h>

int main5()
{
	printf("\nASCII value for character constant \\n = %d",'\n');
	printf("\nASCII value for character constant \\r = %d",'\r');
	printf("\nASCII value for character constant \\t = %d",'\t');
	printf("\nASCII value for character constant \\a = %d",'\a');
	printf("\nASCII value for character constant \\b = %d",'\b');

	char ch;
	printf("\nEnter character constant = ");
	scanf("%c",&ch);
	printf("\nASCII value of entered character constant = %c",ch);
	return 0;
}
