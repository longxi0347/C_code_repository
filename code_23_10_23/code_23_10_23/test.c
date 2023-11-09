#define _CRT_SECURE_NO_WARNINGS

//牛客网 BC91 水仙花数
#include <stdio.h>
int main()
{
	int a, b, c;
	int count = 0;
	int jud = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		c = a;
		count = 0;
		while (c < b)
		{
			jud = (c / 100) * (c / 100) * (c / 100) + (c % 100 / 10) * (c % 100 / 10) * (c % 100 / 10) + (c % 10) * (c % 10) * (c % 10);
			if (c==jud)
			{
				printf("%d ", c);
				count++;
			}
			c++;
		}
		if (count == 0)
			printf("no");
		printf("\n");
	}
	return 0;
}