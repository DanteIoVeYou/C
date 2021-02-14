#include<stdio.h>
#define LIGHT 1000
int light[LIGHT];
int main()
{
	int human, light_num;
	scanf("%d%d",&human,&light_num);
	int i, j;
	for (i = 0; i < light_num; i++)
		light[i] = 0;
	for (i = 1; i <=human;i++)
		for (j = 1; j <=light_num; j++)
			if (!(j % i)) light[j-1]=!light[j - 1];
	for (i = 1; i <= light_num; i++)
		if (light[i-1] == 1) 
			printf("%d ", i);
	return 0;
 } 
