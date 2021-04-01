/*9. 回文数
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。
*/
#include<stdio.h>
int main()
{
	int num=0;
	scanf("%d",&num);
	if(num<0 || (num%10==0&&num!=0))
	{
		printf("no\n");
	}
	else
	{
	int back=0;
	while(num>back)
	{
		back=10*back+num%10;
		num/=10;
	}	
	if(back==num||back/10==num)
		printf("yes\n");
	else
		printf("no\n");
	}
	return 0;
} 
 
