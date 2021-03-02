#include<stdio.h>
#include<string.h>
//�ַ���������
void reverse(char* arr, int n)
{
	char* left = arr;
	char* right = arr + n - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
//��������������ⷨ
void left_move(char* arr, int n)
{
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < n; i++)
	{
		char tmpchar = *arr;
		int j = 0;
		for (j = 0; j < len-1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmpchar;
	}
}

//��������������ⷨ
void left_move2(char* arr, int n)
{
	int len = strlen(arr);
	reverse(arr, n);
	reverse(arr + 2, len - n);
	reverse(arr, len);
}

//�����жϷ� 
int Is_same(char* arr3, char* arr4,int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		left_move(arr3, 1);
		int result = strcmp(arr3, arr4);
		if (result == 0)
			return 0;
	}
	return 1;
}
//�Ӽ��жϷ� 
int Is_same2(char* arr3, char* arr4)
{
	int len = strlen(arr4);
	int len2 = strlen(arr3);
	if (len != len2)
		return 0;
	strncat(arr4, arr4, len);
	if (strstr(arr4, arr3) != NULL)
		return 1;
	else
		return 0;
}

int main()
{
	/*char arr[] = "abcdef";
	left_move(arr, 2);
	printf("%s\n", arr);

	char arr1[] = "abcdef";
	left_move2(arr1, 2);
	printf("%s\n", arr1);*/
	
	//��Ŀ���ж�һ���ַ���arr3����������Ľ���ܷ�������һ���ַ���arr4
	char arr3[] = "abcd";
	char arr4[30] = "bcda";
	int len = strlen(arr3);
	int len2 = strlen(arr4);
	////�㷨һ
	//int result = Is_same(arr3, arr4,len);
	//if (result == 0)
	//	printf("Yes\n");
	//else
	//	printf("No\n");
	//�㷨��
	//int result2 = Is_same2(arr3, arr4);
	//if (result2 == 1)
	//	printf("Yes\n");
	//else
	//	printf("No\n");
	return 0;
}
