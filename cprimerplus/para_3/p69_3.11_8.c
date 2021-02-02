//In the volume-measure of US:
// 1 pint = 2 cups
// 1 cup  = 8 ounces
// 1 ounce= 2 tablespoons
// 1 tablespoon = 3 one-tea-spoons
// The program aims to convert pint to all the other units.
#include<stdio.h>
int main()
{	
	float pint;
	printf("Please enter the number of pints:");
	scanf("%f",&pint);
	if(pint<=1)
	printf("Oh,it is %.1f pint\n%.1f pint is:\n",pint,pint);
	else 
	printf("Oh,it is %.1f pints\n%.1f pints are:\n",pint,pint);
	printf("%.1f cup\n",2*pint);
	printf("%.1f oz\n",2*8*pint);
	printf("%.1f tbs\n",2*8*2*pint);
	printf("%.1f tsp\n",2*8*2*3*pint);
	return 0;
}
