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
//	FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ 
//	fwrite(a, sizeof(*a), SIZE, fp); // д double ������ 
//	fclose(fp);
//	fp = fopen("test.bin", "rb"); // �� double ������ 
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
//	//�Զ�д�ķ�ʽ�������ļ�
//	FILE* fp = fopen("test.txt", "w+");
//	if (fp == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//���ļ���д���ַ���
//	fputs("It is an apple.\n", fp);
//	//����fpλ�ã�����ļ���������Ļ
//	rewind(fp);
//	fgets(arr, 18, fp);
//	fprintf(stdout, "%s", arr);
//	//��fp��λ���ƶ�����ͷλ�ú�8���ֽڴ�����ʹ��ftell�鿴��ʱ��ƫ����
//	fseek(fp, 7, SEEK_SET);
//	printf("offset = %d\n", ftell(fp));
//	//��ƫ����Ϊ8��λ��д���ַ�������ʱ������ԭ�����ɴ���������
//	fputs(" banana.", fp);
//	//����fpλ�ã�����ļ���������Ļ
//	rewind(fp);
//	fgets(arr, 25, fp);
//	fprintf(stdout, "%s", arr);
//	//�ر��ļ�����fp��Ϊ��ָ��
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
//	//��ȡtest.txt�е��ַ��������ļ�β��ֹͣ
//	char c = 0;
//	while ((c = fgetc(fp))!=EOF)
//	{
//		putchar(c);
//	}
//	//�ж��Ƿ��Ƕ�ȡʧ�ܽ���
//	if (ferror(fp))
//	{
//		puts("\nI/O error when reading\n");
//	}
//	//�ж��Ƿ��������ļ�β����
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
	FILE* fp = fopen("test.txt", "wb");//�Զ�����д����ʽ���ļ�

	if (!fp)
	{
		perror(fopen);
		return 1;
	}
	fwrite(arr, sizeof(arr), 1, fp);//�Զ�������ʽ���ļ���д��arr����
	fclose(fp);
	fp = fopen("test.txt", "rb");//�Զ����ƶ�����ʽ���ļ�
	while((ret = fread(&tmp, sizeof(int), 1, fp)) == 1)//ÿ�ζ�ȡ4���ֽڵ�����
	{
		printf("%d ", tmp);
	}
	//�ж��Ƿ��Ƕ�ȡʧ�ܽ���
	if (ferror(fp))
	{
		puts("\nI/O error when reading\n");
	}
	//�ж��Ƿ��������ļ�β����
	else if (feof(fp))
	{
		puts("\nEnd of file reached successfully\n");
	}
	fclose(fp);
	fp = NULL;
	return 0;
}