#include<stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 
 给定一个整数数组 nums?和一个整数目标值 target，请你在该数组中找出 和为目标值 的那?两个?整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。

你可以按任意顺序返回答案。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/two-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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
