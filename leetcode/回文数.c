/*9. ������
����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��

��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ�������������磬121 �ǻ��ģ��� 123 ���ǡ�
*/
#include<stdio.h>
int main()
{
	int num=0;
	scanf("%d",&num);
	if(num<0 || (num%10==0&&num!=0))
	{
		printf("no\n");
	}
	else
	{
	int back=0;
	while(num>back)
	{
		back=10*back+num%10;
		num/=10;
	}	
	if(back==num||back/10==num)
		printf("yes\n");
	else
		printf("no\n");
	}
	return 0;
} 
 
