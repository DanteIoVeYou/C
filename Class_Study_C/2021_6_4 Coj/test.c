#define _CRT_SECURE_NO_WARNINGS 1
//Problem 1 BC68 X��ͼ��
/*

����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�X��ͼ����
����������
�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
���������
���ÿ�����룬����á�*����ɵ�X��ͼ����

*/
#include<stdio.h>
int main()
{
    int num = 0;
    int i = 0;
    int j = 0;
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (j == i || j == num - 1 - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

//Problem 2 BC76 ����Ա����
/*
����
��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
����������
��һ������һ������(0��N��50)��

�ڶ�������N���������е������������ÿո�ָ���N��������

������������Ҫ���в����һ��������

���������
���Ϊһ�У�N+1���������е�������

*/
#include<stdio.h>
int main()
{
    int num = 0;
    int i = 0;
    int sum = 0;
    int max = 0;
    int min = 100;
    double aver = 0;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &num);
        max = num > max ? num : max;
        min = num < min ? num : min;
        sum += num;
    }
    aver = (sum - max - min) / 5.0;
    printf("%.2lf\n", aver);
    return 0;
}

//Problem 3 BC77 �������в���һ����
/*

����
��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
����������
��һ������һ������(0��N��50)��

�ڶ�������N���������е������������ÿո�ָ���N��������

������������Ҫ���в����һ��������

���������
���Ϊһ�У�N+1���������е�������

*/

#include<stdio.h>
#include<stdlib.h>
int Find(int* pi, int num, int N)
{
    int i = 0;
    for (i = 0; i < N; i++)
    {
        if (num < *(pi + i))
            return i + 1;
    }
    return N + 1;
}
int main()
{
    int N = 0;
    int* pi = (int*)calloc(N + 1, sizeof(int));
    scanf("%d", &N);
    int i = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%d", pi + i);
    }
    int num = 0;
    scanf("%d", &num);
    int ret = Find(pi, num, N);
    if (ret == N + 1)
    {
        pi[N] = num;
    }
    else
    {
        for (i = N + 1; i > ret; i--)
        {
            pi[i - 1] = pi[i - 2];
        }
        pi[ret - 1] = num;
    }
    for (i = 0; i < N + 1; i++)
    {
        printf("%d ", pi[i]);
    }
    free(pi);
    pi = NULL;
    return 0;
} 
//Problem 4 BC54 ����·�����
/*
����
KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
����������
�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
���������
���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
*/
#include<stdio.h>
int JudgeLeapYear(int year)
{
    if (((!(year % 4)) && (year % 100)) || !(year % 400))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int year = 0;
    int month = 0;
    while (scanf("%d%d", &year, &month) != EOF)
    {

        if (JudgeLeapYear(year))
        {
            switch (month)
            {
            case 1:
                printf("31\n");
                break;
            case 2:
                printf("29\n");
                break;
            case 3:
                printf("31\n");
                break;
            case 4:
                printf("30\n");
                break;
            case 5:
                printf("31\n");
                break;
            case 6:
                printf("30\n");
                break;
            case 7:
                printf("31\n");
                break;
            case 8:
                printf("31\n");
                break;
            case 9:
                printf("30\n");
                break;
            case 10:
                printf("31\n");
                break;
            case 11:
                printf("30\n");
                break;
            case 12:
                printf("31\n");
                break;
            }
        }
        else
        {
            switch (month)
            {
            case 1:
                printf("31\n");
                break;
            case 2:
                printf("28\n");
                break;
            case 3:
                printf("31\n");
                break;
            case 4:
                printf("30\n");
                break;
            case 5:
                printf("31\n");
                break;
            case 6:
                printf("30\n");
                break;
            case 7:
                printf("31\n");
                break;
            case 8:
                printf("31\n");
                break;
            case 9:
                printf("30\n");
                break;
            case 10:
                printf("31\n");
                break;
            case 11:
                printf("30\n");
                break;
            case 12:
                printf("31\n");
                break;
            }
        }
    }
    return 0;
}