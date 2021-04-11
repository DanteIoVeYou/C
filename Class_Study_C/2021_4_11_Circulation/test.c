int main()
{
	int target = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,15,67,89 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	while (left <= right)
	{
		if (arr[mid] > target)
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else if (arr[mid] < target)
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else
		{
			printf("Succeeded! %d\n", arr[mid]);
			break;
		}
	}
	if (left > right)
	{
		printf("Fail\n");
	}
	return 0;
}
