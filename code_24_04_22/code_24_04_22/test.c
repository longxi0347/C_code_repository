#define _CRT_SECURE_NO_WARNINGS


//使用fgets()函数读取输入的字符串
#include <stdio.h>
#include <string.h>

int main()
{
	char input[100] = { 0 };			//创建一个字符数组储存字符串
	printf("请输入一行字符串:");		//提示输入
	fgets(input, sizeof(input), stdin);		//使用fgets()获取键盘输入
	input[strcspn(input, "\n")] = '\0';		//将字符串末尾的换行符换成\0
	printf("%s", input);					//输出字符串
	return 0;
}

