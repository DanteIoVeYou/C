#include<stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 
 ����һ���������� nums?��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ ����?����?���������������ǵ������±ꡣ

����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ�ز���ʹ�����顣

����԰�����˳�򷵻ش𰸡�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/two-sum
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
 */
 
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i=0;
    int j=0;
    for(i=0;i<numsSize-1;i++)
	    {
		    for(j=i+1;j<numsSize;j++)
		    {
			    if(nums[i]+nums[j]==target)
				    {
                        int* ret=(int*)malloc(sizeof(int)*2);
					    ret[0]=i;
					    ret[1]=j;
                        *returnSize = 2;
					    return ret;
				    }
		    } 
	    }
        return;
}
