	
int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
	returnSize = (int*)malloc(8);
	int ret = 0;
	int i = 0;
	for (i = 0; i < numsSize; i++)
	{
		ret ^= nums[i];
	}
	int pos = 0;
	for (int i = 0; i < 32; i++)
	{
		if (ret & 1 == 1)
		{
			pos = i;
			break;
		}
		else
			ret = ret >> 1;
	}
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (((nums[i] >> pos) & 1) == 1)
		{
			num1 ^= nums[i];
		}
		else
		{
			num2 ^= nums[i];
		}
	}
	returnSize[0] = num1;
	returnSize[1] = num2;
	return returnSize;
}
int main()
{
	int arr[] = { 4,1,4,6 };
	int* two = NULL;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* ret = singleNumbers(arr, sz, two );
	printf("%d %d", ret[0], ret[1]);
	free(ret);
	ret = NULL;
	return 0;
}
