#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//NO.1 Realize memcpy
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 6,7,8,9,10 };
//	my_memcpy(arr1, arr2, 20);
//	return 0;
//}


//NO.2 Realize memmove
//void* my_memmove(void* dest, void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (src < dest)
//	{
//		dest = (char*)dest + count - 1;
//		src = (char*)src + count - 1;
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest - 1;
//			src = (char*)src - 1;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 2,3,5,11,2 };
//	my_memmove(arr1+3, arr1, 20);
//}



//enum introduction
//enum data {
//	high,
//	weight,
//	feture = 50,
//	weath
//}element=weight;
//
//enum Day {
//	Monday,
//	Tuesday,
//	Wednesday,
//	Thursday,
//	Friday,
//	Saturday,
//	Sunday
//};
//
//int main()
//{
//	printf(" element = %d\n high = %d\n weight = %d\n feture = %d\n weath = %d\n\n\n", element, high, weight, feture, weath);
//	element = feture;
//	printf(" element = %d\n high = %d\n weight = %d\n feture = %d\n weath = %d\n", element,high,weight,feture,weath);
//}

