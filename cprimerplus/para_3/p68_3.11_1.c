#include<stdio.h>
int main()
{
	//overflow
	printf("Notice the overflow of an integer:2147483647+1=%d \n",2147483648);
	//printf("Notice the overflow of a float:2e898 * 100=%e \n",2e900);
	//underflow
	//use "%e" to substitute for "%f" to show a num in scientific notation
	//printf("2e-498 / 100 = %e\n",2e-500);
	return 0;	
}
//If the num you enteris over the range , overflow or underflow it causes will be considered "wrong" by the compiler.
