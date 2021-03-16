#include<stdio.h>
#include<math.h>
#include<limits.h> 

#define isOverLength 0

int reverse(int x){
    long lRet = 0;
    while(0 != x)
    {
        lRet = lRet * 10 + x % 10;
        x = x / 10;
    }

    if((int)lRet != lRet)
    {
        return isOverLength;
    }

    return (int)lRet;
}

int main()
{
	int a=0;
	scanf("%d",&a);
	a=reverse(a);
	printf("%d\n",a);
	
	
	
	return 0;
 } 
