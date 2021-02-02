#include<stdio.h>
int main()
{	
	int mul(int x,int y);
	int a=mul(2,29);
	printf("%d",a);





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
