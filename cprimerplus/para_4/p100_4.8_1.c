//The program is to enter firstname and lastname and then print them in form of "firstname,lastname"
#include<stdio.h>
int main()
{
	char firstname[40],lastname[40];
	printf("Please enter your firstname:");
	scanf("%s",firstname);
	printf("Please enter your lastname:");
	scanf("%s",lastname);
	printf("Oh,your name is %s %s!\n",firstname,lastname);
	return 0;
}
