//һ������Ϊn-1�ĵ������������е��������ֶ���Ψһ�ģ�����ÿ�����ֶ��ڷ�Χ0��n-1֮�ڡ��ڷ�Χ0��n-1�ڵ�n������������ֻ��һ�����ֲ��ڸ������У����ҳ�������֡�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof
 
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
