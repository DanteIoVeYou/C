//The program aims to read a float , print it in the form of decimal, then in exponential notation and finally in hexadecimal
#include<stdio.h>
int main()
{
	float num;
	printf("Enter a floating-point value:");
	scanf("%f",&num);
	printf("fixed-point notation:  %f \n",num);
	printf("exponential notation:  %e \n",num);
	printf("p notation: %a\n",num);
	return 0;



}
