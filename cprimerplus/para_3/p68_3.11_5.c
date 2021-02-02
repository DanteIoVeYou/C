//There are about 3.156e7 seconds one year and the program aims to show the age of you with the formats of seconds as long as you enter your age year.
#include<stdio.h>
int main()
{	int age;
	float second;
	printf("Please enter your age:");
	scanf("%d",&age);
	second = 3.156e7*age;
	printf("You are %f seconds old!!!\n",second);
	return 0;
}
