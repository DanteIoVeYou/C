//一个长度为n-1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n-1之内。在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof
 
int missingNumber(int* nums, int numsSize)
{
    int* arr = (int*)malloc(sizeof(int)*(numsSize+1));
    int i=0;
    for(i=0;i<numsSize+1;i++)
    {
        arr[i]=i;
    }
    int init=0;
    for(i=0;i<numsSize+1;i++)
    {
        init^=arr[i];
    }
    for(i=0;i<numsSize;i++)
    {
        init^=nums[i];
    }
    free(arr);
    arr=NULL;
    return init;
}

int missingNumber(int* nums, int numsSize)
{
    int init=0;
    int i=0;
    for(i=0;i<numsSize;i++)
        init^=nums[i];
    for(i=0;i<numsSize+1;i++)
        init^=i;
    return init;
}
