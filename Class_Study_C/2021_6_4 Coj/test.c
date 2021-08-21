#define _CRT_SECURE_NO_WARNINGS 1
//Problem 1 BC68 X形图案
/*

描述
KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的X形图案。
输入描述：
多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
输出描述：
针对每行输入，输出用“*”组成的X形图案。

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

//Problem 2 BC76 公务员面试
/*
描述
有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
输入描述：
第一行输入一个整数(0≤N≤50)。

第二行输入N个升序排列的整数，输入用空格分隔的N个整数。

第三行输入想要进行插入的一个整数。

输出描述：
输出为一行，N+1个有序排列的整数。

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

//Problem 3 BC77 有序序列插入一个数
/*

描述
有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
输入描述：
第一行输入一个整数(0≤N≤50)。

第二行输入N个升序排列的整数，输入用空格分隔的N个整数。

第三行输入想要进行插入的一个整数。

输出描述：
输出为一行，N+1个有序排列的整数。

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
//Problem 4 BC54 获得月份天数
/*
描述
KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
输入描述：
多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
输出描述：
针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
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