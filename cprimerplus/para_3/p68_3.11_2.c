//The program intends to give an ASCII of a character you just entered.
#include<stdio.h>
int main()
{
	char character;
	printf("Please enter a character:");
	scanf("%c",&character);
	printf("The ASCII of %c is %d\n",character,character);
	return 0;
}

