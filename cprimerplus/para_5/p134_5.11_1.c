//The program converts hours and minutes to seconds and can run circularly.
#include<stdio.h>
#define CON 60
int main()
{
	while(1)
	{		
		int hour = 0;
		float sec = 0;
		float input = 0;
		printf("Please input minutes:");
		scanf("%f",&input);
		hour = input/CON;
		sec =(int)input%CON;
		printf("%.0f minutes is %d h %.0f min\n",input,hour,sec);
	}
	return 0;
}
