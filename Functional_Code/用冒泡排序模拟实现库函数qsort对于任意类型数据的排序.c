//用冒泡排序模拟实现库函数qsort对于任意类型数据的排序
#include<stdio.h>
#include<string.h>
struct stu {
	char name[20];
	int age;
};

int cmp_integer(const void* e1, const void* e2);
int cmp_struct_string(const void* e1, const void* e2);
int cmp_struct_integer(const void* e1, const void* e2);

void _swap(char* p1,char* p2, size_t byte_num)
{
	int i = 0;
	for (i = 0; i < byte_num ; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void Bubble_Qsort(void* base,
	size_t num,
	size_t width,
	int (*cmp)(const void* e1, const void* e2)
)
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j * width , (char*)base + (j + 1) * width) > 0)
			{
				_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


void test_integer()
{
	int arr_int[] = { 1,4,2,6,7,5,9,8,3,5,0 };
	Bubble_Qsort(arr_int, sizeof(arr_int) / sizeof(arr_int[0]), sizeof(arr_int[0]), cmp_integer);
}
void test_struct_string()
{
	struct stu people[5] = { {"zhangsan",28},{"lisi",29},{"wangwu",17},{"zhaoliu",48},{"sunqi",8} };
	Bubble_Qsort(people, sizeof(people) / sizeof(people[0]), sizeof(people[0]), cmp_struct_string);
}
void test_struct_integer()
{
	struct stu people[5] = { {"zhangsan",28},{"lisi",29},{"wangwu",17},{"zhaoliu",48},{"sunqi",8} };
	Bubble_Qsort(people, sizeof(people) / sizeof(people[0]), sizeof(people[0]), cmp_struct_integer);
}


int cmp_integer(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_struct_string(const void* e1, const void* e2)
{
	return strcmp(( (struct stu*)e1)->name, ((struct stu*)e2)->name );
}
int cmp_struct_integer(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

int main()
{
	test_integer();
	test_struct_string();
	test_struct_integer();
	return 0;
}
