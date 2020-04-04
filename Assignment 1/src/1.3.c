#include<stdio.h>
#include<stdlib.h>

int main3()
{
	char ch;
	printf("\nEnter a character = ");
	scanf("%c",&ch);

	printf("\nASCII value of entered character in decimal format = %d", ch);
	printf("\nASCII value of entered character in hex format = %x", ch);
	printf("\nASCII value of entered character in octal format = %o", ch);

	int x;
	printf("\n\nEnter a ASCII value = ");
	scanf("%d",&x);

	printf("\nCharacter for entered ASCII value = %c",x);

	return 0;
}
