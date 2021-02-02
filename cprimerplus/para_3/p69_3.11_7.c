//The program is with the purpose of converting inch to centimeter
//1 inch equates to 2.54 cm
#include<stdio.h>
int main()
{

	float height;
	printf("Please enter your height:__inches\b\b\b\b\b\b\b\b");
	scanf("%f",&height);
	printf("You are %.1f cm tall!!!\n",height*2.54);
	return 0;
}
