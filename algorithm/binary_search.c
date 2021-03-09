int BinarySearch(int a, int arr[], int sz)//a is the number being searched from arr[] including sz elements
{
	int left = 0;
	int right = sz - 1;
	int mid = (sz - 1) / 2;
	while(left <= right)
	{
		if (arr[mid] == a)
		{
			return 1;
		}
		if (a > arr[mid])
		{
			left = mid+1;
		}
		else right = mid-1;
		mid = (left + right) / 2;
	}
	return 0;
}
