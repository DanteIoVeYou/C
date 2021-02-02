//The mass of H2O molecule is 3.0e-23g, the program is to calculate the number of H2O molecules when you entering the quart.
//1 Quart equates to 950 Grams.
#include<stdio.h>
int main()
{
	//calculate the num of 1g H2O
	double mass_1quart = 1/(3.0e-23)*950;
	double mass;
	printf("Please enter the mass of water:______g\b\b\b\b\b\b\b");
	scanf("%lf",&mass);
	printf("The number of H2O molecules are: %.2le\n",mass*mass_1quart);
	return 0;
}

