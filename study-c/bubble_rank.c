//It's a demo of bubble-rank.
#include<stdio.h>
int buddle(int array[],int len)
{
	int i,j,tmp;
	for(i=0;i<len-1;i++)
	{	
		int flag=1;
		for(j=0;j<len-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				tmp=array[j];
				array[j]=array[j+1];
				array[j+1]=tmp;
				flag=0;
			
			}
		}
		if(flag == 1) break;
	}
}
int main()
{
	int i,len;
	int array[9]={1,5,7,2,9,4,3,6,8};
	len = sizeof(array)/sizeof(array[0]);
	buddle(array,len);
	for(i=0;i<len;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}
