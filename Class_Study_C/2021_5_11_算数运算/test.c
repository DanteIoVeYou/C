#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sn = 0;
//	int i = 0;
//	int num = 0;
//	for (i = 0; i < 5; i++)
//	{
//		num = num * 10 + a;
//		sn += num;
//	}
//	printf("%d\n", sn);
//	return 0;
//}

//#include<stdio.h>
//int recurtion(int a,int a1)
//{
//	if (a < 100000)
//		return a + recurtion(10 * a + a1,a1);
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sn = 0;
//	sn = recurtion(a,a);
//	printf("%d\n", sn);
//	return 0;
//}

/*���0��100000֮������С�ˮ�ɻ������������

��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

*/
//#include<stdio.h>
//int pow(int x, int y)
//{
//	int i = 0;
//	int mul = 1;
//	for (i = 0; i < y; i++)
//	{
//		mul = mul * x;
//	}
//	return mul;
//}
//int Judge_bit(int num)
//{
//	int n = 0;
//	while (num)
//	{
//		n++;
//		num /= 10;
//	}
//	return n;
//}
//Judge_shuixianhua(int num)
//{
//	int bit = Judge_bit(num);
//	int i = 0;
//	int num1 = num;
//	int sum = 0;
//	for (i = 0; i < bit; i++)
//	{
//		sum += pow(num1 % 10,bit);
//		num1 /= 10;
//	}
//	if (sum == num)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		if (Judge_shuixianhua(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
