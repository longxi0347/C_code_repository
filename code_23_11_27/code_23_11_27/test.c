#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
////向函数传递二维数组的指针
//void change(int(*arr)[3])
//{
//	arr[0][0] = 1;
//}
//
//int main()
//{
//	int arr[3][3] = { 0 };
//	int i = 0; int j = 0;
//	change(arr);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////蓝桥云课 8227 国王的考验
//#include <stdio.h>
//
//int main()
//{
//	int S; int N;
//	int count = 0;
//	scanf("%d %d", &S, &N);
//	if (S % 2)
//	{
//		S -= 1;
//		count++;
//	}
//	S /= 2;
//	N /= 2;
//	if (S <= N)
//		count++;
//	else
//	{	
//		while (1)
//		{
//			if (S >= N)
//			{
//				S -= N;
//				N--;
//				count++;
//			}
//			else
//			{
//				count++;
//				break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

////蓝桥云课 154 凯撒加密
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int len = 0;
//	int ch;
//	int i = 0;
//	char arr[100] = { 0 };
//	ch = getchar();
//	while (ch!='\n')
//	{
//		arr[i] = ch;
//		i++;
//		ch = getchar();
//	}
//	len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] < 'x')
//			arr[i] += 3;
//		else
//			arr[i] -= 23;
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
    int a, b, c;
    int n;
    int i = 0;
    int count = 0;
    int arr[10] = { 0 };
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    for (i = 1; i <= n; i++)
    {
        if (i % a != 0 && i % b != 0 && i % c != 0)
        {
            arr[count] = i;
            count++;
        }
    }
    printf("%d", count);
    for (i = 0; i < count; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}