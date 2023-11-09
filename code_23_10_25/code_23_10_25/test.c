#define _CRT_SECURE_NO_WARNINGS

//getchar()在没有读取到字符时会让用户输入，如果输入行有字符，getchar()会直接读取，不会让用户输入
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