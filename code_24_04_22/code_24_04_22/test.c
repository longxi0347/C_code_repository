#define _CRT_SECURE_NO_WARNINGS


//ʹ��fgets()������ȡ������ַ���
#include <stdio.h>
#include <string.h>

int main()
{
	char input[100] = { 0 };			//����һ���ַ����鴢���ַ���
	printf("������һ���ַ���:");		//��ʾ����
	fgets(input, sizeof(input), stdin);		//ʹ��fgets()��ȡ��������
	input[strcspn(input, "\n")] = '\0';		//���ַ���ĩβ�Ļ��з�����\0
	printf("%s", input);					//����ַ���
	return 0;
}

