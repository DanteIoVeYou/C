#include<stdio.h>
int main()
{	
	int mul(int x,int y);
	int base_number,index;
	printf("Please enter the base number:");
	scanf("%d",&base_number);
	printf("Please enter the index:",&index);
	scanf("%d",&index);
	int a=mul(base_number,index);
	printf("%d ^ %d = %d\n",base_number,index,a);
	return 0;

}
int mul(int x,int y)
{
	int i;
	int muti=1;
	for(i=0;i<y;i++)
	{
		muti*=x;
	}
	return muti;



}
