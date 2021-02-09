//Enter your height in  cm and output in feet and inches.
// 1 foot = 30.48cm
// 1 inch = 2.54cm
#include<stdio.h>
int main()
{
	while(1)
	{
		printf("Please enter your height in cm (<=0 to quit):");
		double height = 0;
		double foot = 0;
		double inch = 0;
		scanf("%lf",&height);
		if(height<=0) break;
		foot = height/30.48;
		inch = (foot-(int)(height/30.48))*12;
		printf("%.1lf cm = %d feet, %.1lf inches.\n",height,(int)foot,inch);
	}
	return 0;




}
