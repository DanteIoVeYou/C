/*3. ���ظ��ַ�����Ӵ�
����һ���ַ����������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�

 

ʾ�� 1:

����: s = "abcabcbb"
���: 3 
����: ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��
ʾ�� 2:

����: s = "bbbbb"
���: 1
����: ��Ϊ���ظ��ַ�����Ӵ��� "b"�������䳤��Ϊ 1��
ʾ�� 3:

����: s = "pwwkew"
���: 3
����: ��Ϊ���ظ��ַ�����Ӵ��� "wke"�������䳤��Ϊ 3��
     ��ע�⣬��Ĵ𰸱����� �Ӵ� �ĳ��ȣ�"pwke" ��һ�������У������Ӵ���
ʾ�� 4:

����: s = ""
���: 0

0 <= s.length <= 5 * 104
s ��Ӣ����ĸ�����֡����źͿո����
*/
int lengthOfLongestSubstring(const char* s)
{
	int count = 0;
	int max = 0;
	if (*s == '\0')
		return 0;
	count++;
	int i = 0;
	while (*(s+1))
	{
		s++;
		for (i = 1; i <= count; i++)
		{
			if (*s == *(s - i))
			{
				count > max ? max = count : max;
				s = s - i + 1;
				count = 0;
				break;
			}
		}
		count++;
	}
	count > max ? max = count : max;
		return max;
}
#include<stdio.h>
int main()
{
	char* str = "aabbccddabcabcbb";
	int nummax = lengthOfLongestSubstring(str);
	printf("%d\n",nummax);
	return 0;
}
