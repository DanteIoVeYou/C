#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//
//	//FILE* pf = fopen("test.txt", "w+");
//	//if (pf == NULL)
//	//{
//	//	perror("fopen");
//	//	return 1;
//	//}
//	//char arr[] = "abcdef";
//	//fwrite(arr, sizeof(arr), 1, pf);
//	//char arr1[10] = { 0 };
//	//int ret = 0;
//	//ret = fread(arr1, sizeof(arr), 1,pf);
//	////fprintf(stdout, "%d\n", ret);
//	//printf("%d\n", ret);
//
//	//fclose(pf);
//	//pf = NULL;
//
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (!pfwrite)
//	{
//		fclose(pfread);
//		pfread = NULL;
//		perror(fopen);
//		return 1;
//	}
//	int c = 0;
//	while ((c = fgetc(pfread)) != EOF)
//	{
//		fputc(c, pfwrite);
//	}
//	if (feof(pfread))
//	{
//		printf("End normally\n");
//	}
//	if (ferror(pfread))
//	{
//		perror(fgetc);
//	}
//	fclose(pfread);
//	fclose(pfwrite);
//	pfread = NULL;
//	pfwrite = NULL;
//	return 0;
//}

//int main()
//{
//
//	FILE* pf = fopen("ascii.txt", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	
//	int a = 10000;
//	fwrite(&a, sizeof(a), 1, pf);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//#include <stdio.h> 
//int main () 
//{
//FILE* pFile;
//pFile = fopen("example.txt", "wb"); 
//fputs("This is an apple.", pFile); 
//fseek(pFile, 9, SEEK_SET); 
//fputs(" sam", pFile);
//printf("%d\n", ftell(pFile));
//fclose(pFile);
//return 0;
//}

//#include <stdio.h> 
//int main () {
//FILE* pFile; 
//long size;
//pFile = fopen("example.txt", "rb"); 
//if (pFile == NULL) 
//perror("Error opening file"); 
//else {
//	fseek(pFile, 0, SEEK_END); // non-portable 
//	size=ftell (pFile); 
//	fclose (pFile);
//	printf ("Size of myfile.txt: %ld bytes.\n",size);
//} return 0;
//}

#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("az.tvt", "wb");
//	if (pf == NULL)
//	{
//		perror(pf);
//		return 1;
//	}
//	int i = 0;
//	for (i = 'a'; i < 'z' + 1; i++)
//	{
//		fwrite(&i, 1, 1, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	FILE* pf1 = fopen("az.tvt", "rb");
//	if (pf1 == NULL)
//	{
//		perror(pf1);
//		return 11;
//	}
//	char arr[27] = { 0 };
//	fread(arr, 1, 26, pf1);
//	arr[26] = '\0';
//	//rewind(pf1);
//	fseek(pf1, 0l, SEEK_SET);
//	printf("%d\n", ftell(pf1));
//	fclose(pf1);
//	pf1 = NULL;
//	puts(arr);
//	return 0;
//}

//enum { SIZE = 5 };
//int main(void) {
//	double a[SIZE] = { 1.0,2.0,3.0,4.0,5.0 };
//	double b = 0.0; 
//	size_t ret_code = 0; 
//	FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式 
//	fwrite(a, sizeof(*a), SIZE, fp); // 写 double 的数组 
//	fclose(fp);
//	fp = fopen("test.bin", "rb"); // 读 double 的数组 
//	while((ret_code = fread(&b, sizeof(double), 1, fp))>=1) {
//	printf("%lf\n", b);
//}
//if (feof(fp))
//printf("No error reading test.bin\n");
//else if (ferror(fp)) {
//	perror("Error reading test.bin");
//}
//fclose(fp); fp = NULL;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		pf = NULL;
//	}
//	fputs("helloworld", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char buffer[100] = { 0 };
//	char* arr[10] = {0};
//	char* arr2[10] = {0};
//	char* arr3[10] = {0};
//	int a = 0;
//	sscanf("888 def 1000", "%d %s %s", &a,arr2,arr3);
//	sprintf(buffer, "%d %s %s", a, arr2, arr3);
//	//printf("%d %s %s", a, arr2, arr3);
//	printf("%s", buffer);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[30] = { 0 };
//	FILE* fp = fopen("test.txt", "w+");
//	if (fp == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	fputs("It is an apple.\n", fp);
//
//	rewind(fp);
//	fgets(arr, 18, fp);
//	fprintf(stdout,"%s", arr);
//
//	fseek(fp, 8, SEEK_SET);
//	printf("offset = %d\n", ftell(fp));
//
//	fputs(" banana.", fp);
//	rewind(fp);
//
//	fgets(arr, 25, fp);
//	fprintf(stdout, "%s", arr);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[30] = { 0 };
//	//以读写的方式建立新文件
//	FILE* fp = fopen("test.txt", "w+");
//	if (fp == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//向文件中写入字符串
//	fputs("It is an apple.\n", fp);
//	//重置fp位置，输出文件内容至屏幕
//	rewind(fp);
//	fgets(arr, 18, fp);
//	fprintf(stdout, "%s", arr);
//	//将fp的位置移动至开头位置后8个字节处，并使用ftell查看此时的偏移量
//	fseek(fp, 7, SEEK_SET);
//	printf("offset = %d\n", ftell(fp));
//	//在偏移量为8的位置写入字符串，此时覆盖了原本的由此向后的内容
//	fputs(" banana.", fp);
//	//重置fp位置，输出文件内容至屏幕
//	rewind(fp);
//	fgets(arr, 25, fp);
//	fprintf(stdout, "%s", arr);
//	//关闭文件并将fp置为空指针
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* fp = fopen("test.txt", "r+");
//	if (!fp)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//读取test.txt中的字符，遇到文件尾则停止
//	char c = 0;
//	while ((c = fgetc(fp))!=EOF)
//	{
//		putchar(c);
//	}
//	//判断是否是读取失败结束
//	if (ferror(fp))
//	{
//		puts("\nI/O error when reading\n");
//	}
//	//判断是否是遇到文件尾结束
//	else if (feof(fp))
//	{
//		puts("\nEnd of file reached successfully\n");
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}


#include<stdio.h>
int main()
{
	size_t ret = 0;
	int tmp = 0;
	int arr[] = { 1,2,3,4,5 };
	FILE* fp = fopen("test.txt", "wb");//以二进制写的形式打开文件

	if (!fp)
	{
		perror(fopen);
		return 1;
	}
	fwrite(arr, sizeof(arr), 1, fp);//以二进制形式向文件中写入arr数组
	fclose(fp);
	fp = fopen("test.txt", "rb");//以二进制读的形式打开文件
	while((ret = fread(&tmp, sizeof(int), 1, fp)) == 1)//每次读取4个字节的数据
	{
		printf("%d ", tmp);
	}
	//判断是否是读取失败结束
	if (ferror(fp))
	{
		puts("\nI/O error when reading\n");
	}
	//判断是否是遇到文件尾结束
	else if (feof(fp))
	{
		puts("\nEnd of file reached successfully\n");
	}
	fclose(fp);
	fp = NULL;
	return 0;
}