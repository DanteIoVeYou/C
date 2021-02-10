//Create a function to get the max num of a int array.
#include<stdio.h>
#define ARR 10
int Max(int arr[ARR])
{
	int max=arr[0];
	int i=0;
	for(i=0;i<ARR-1;i++)
	{
		(arr[i]>arr[i+1])?(max=arr[i]):(max=arr[i+1]);
	}
	return max;


}
int main()
{
	int i=0;
	int arr[ARR]={0};
	for(i=0;i<ARR;i++)
	scanf("%d",&arr[i]);
	int max=0;
	max=Max(arr);
	printf("The max num is %d.\n",max);
	return 0;
}

