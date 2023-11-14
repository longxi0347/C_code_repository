#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//3阶幻方

int check(int arr[][3])
{
	int i, j;
	int a = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] == 0)
				a++;
		}
	}
	return a;
}

void tian(int arr[][3])
{
	int i = 0; int j = 0;
	int a = 0; int b = 0; int c = 0; int d = 0;
	int e = 0; int f = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] == 0)
			{
				if (j == 0)
				{
					a = arr[i][1]; b = arr[i][2];
				}
				else if (j == 1)
				{
					a = arr[i][0]; b = arr[i][2];
				}
				else
				{
					a = arr[i][0]; b = arr[i][1];
				}
				if (i == 0)
				{
					c = arr[1][j]; d = arr[2][j];
				}
				else if (i == 1)
				{
					c = arr[0][j]; d = arr[2][j];
				}
				else
				{
					c = arr[0][j]; d = arr[1][j];
				}

				if (arr[2 - i][2 - j] != 0)
					arr[i][j]=10 - arr[2 - i][2 - j];
				else if (a != 0 && b != 0)
				{
					arr[i][j] = 15 - a - b;
				}
				else if (c != 0 && d != 0)
				{
					arr[i][j] = 15 - c - d;
				}
			}
		}
	}
}

int if_special(int arr[][3])
{
	int m = 0;
	m = check(arr);
	if (m == 4 && arr[0][0] == 0 && arr[2][2] == 0)
		return 1;
	else
		return 0;
}

void solve(int arr[][3])
{
	int a1 = 0; int b1 = 0;
	int a2 = 0; int b2 = 0;
	int i = 0; int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] == 7)
			{
				a1 = i;
				a2 = j;
			}
			if (arr[i][j] == 9)
			{
				b1 = i;
				b2 = j;
			}
		}
	}
	arr[3 - a1 - b1][3 - a2 - b2] = 8;
}

int main()
{
	int arr[3][3] = { 0 };
	int i = 0; int j = 0;
	int count = 0;
	//输入并存储原始三阶幻方
	for (i = 0; i < 3; i++)
	{
		j = 0;
		scanf("%d %d %d", &arr[i][j],&arr[i][j+1],&arr[i][j+2]);
	}
//对第一行3个数进行判断
	for (i = 0, j = 0; j < 3; j++)
	{
		if (arr[i][j] == 0 && arr[2 - i][2 - j] == 0)
			count++;
		else if (arr[i][j] == 0 && arr[2 - i][2 - j] != 0)
			arr[i][j] = 10 - arr[2 - i][2 - j];
		else
			arr[2 - i][2 - j] = 10 - arr[i][j];
	}
//对第二行第1个数进行判断
	if (arr[1][0] == 0 && arr[1][2] == 0)
		count++;
	else if (arr[1][0] == 0 && arr[1][2] != 0)
		arr[1][0] = 10 - arr[1][2];
	else
		arr[1][2] = 10 - arr[1][0];
//判断是否有唯一解
	if (count == 4 || count == 3)
		printf("Too Many");

	else
		while (check(arr))
		{
			tian(arr);
			if (if_special(arr))
				solve(arr);
		}
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d ", arr[i][j]);
			}
		printf("\n");
		}
	return 0;
}