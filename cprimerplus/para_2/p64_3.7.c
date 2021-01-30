#include<stdio.h>
int main()
{
	float salary;
	printf("\aEnter your desired monthly salary:");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f",&salary);
	printf("\t$%.2f a month is $%.2f a year",salary,12.0*salary);
	printf("\rGood!\n");









return 0;
}
