#include<stdio.h>
void print(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}
Bubble(int* tmp, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (tmp[j] > tmp[j + 1])
			{
				int tmp1 = tmp[j];
				tmp[j] = tmp[j + 1];
				tmp[j + 1] = tmp1;
			}
		}
	}
}
int main()
{
	int a[7] = { 0 };
	int b[7] = { 0 };
	int tmp[7] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 7; i++)
	{
		tmp[i]=a[i];
	}
	Bubble(tmp, 7);
	int rank = 1;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (a[j] == tmp[i])
			{
				b[j] = rank;
			}
		}
		rank++;
		while (tmp[i + 1] == tmp[i])
		{
			i++;
		}
	}
	print(b, 7);
	return 0;
}
