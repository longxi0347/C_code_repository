#define _CRT_SECURE_NO_WARNINGS

//getchar()��û�ж�ȡ���ַ�ʱ�����û����룬������������ַ���getchar()��ֱ�Ӷ�ȡ���������û�����
#include <stdio.h>
int main()
{
	char ch1, ch2;
	ch1 = getchar();
	getchar();
	ch2 = getchar();
	putchar(ch1);
	putchar(ch2);
	return 0;
}