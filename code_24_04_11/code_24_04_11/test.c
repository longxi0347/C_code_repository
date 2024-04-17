#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

////使用malloc创建二维数组
//int main()
//{
//	int row = 5;
//	int col = 4;
//	int** arr;
//	arr = (int**)malloc(row * sizeof(int*));
//	for (int i = 0; i < row; i++)
//	{
//		arr[i] = (int*)malloc(col * sizeof(int));
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			arr[i][j] += 1;
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < row; i++)
//	{
//		free(arr[i]);
//	}
//	free(arr);
//	return 0;
//}

//UDDLUULRUL
//UURLLLRRRU
//RRUURLDLRD
//RUDDDDUUUU
//URUDLLRRUU
//DURLRLDLRL
//ULLURLLRDU
//RDLULLRDDD
//UUDDUDUDLL
//ULRDLUURRR

//读取多行字符串并存到二维数组中

//int main()
//{
//	char arr[10][10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			scanf(" %c", &arr[i][j]);
//		}
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//# 【深基12.例1】部分背包问题
//## 题目描述
//阿里巴巴走进了装满宝藏的藏宝洞。藏宝洞里面有 $N(N \le 100)$ 堆金币，第 $i$ 堆金币的
//总重量和总价值分别是 $m_i, v_i(1\le m_i, v_i \le 100)$。阿里巴巴有一个承重量为 $T(T \le 1000)$ 的背包，
//但并不一定有办法将全部的金币都装进去。他想装走尽可能多价值的金币。所有金币都可以随意分割，
//分割完的金币重量价值比（也就是单位价格）不变。请问阿里巴巴最多可以拿走多少价值的金币？
//## 输入格式
//第一行两个整数 $N, T$。
//接下来 $N$ 行，每行两个整数 $m_i, v_i$。
//## 输出格式
//一个实数表示答案，输出两位小数
//## 样例 #1
//### 样例输入 #1
//```
//4 50
//10 60
//20 100
//30 120
//15 45
//```
//### 样例输出 #1
//```
//240.00
//```

int main()
{
	double** arr;
	int N = 0;
	double T = 0;
	double val = 0;
	scanf("%d %lf", &N, &T);
	arr = (double**)malloc(N * sizeof(double*));
	for (int i = 0; i < N; i++)
	{
		arr[i] = (double*)malloc(3 * sizeof(double));
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%lf", &arr[i][j]);
		}
		arr[i][2] = arr[i][1] / arr[i][0];
	}
	double* arr2;
	arr2 = (double*)malloc(N * sizeof(double));
	while (T)
	{
		double max = 0;
		int sig = 0;
		for (int i = 0; i < N; i++)
		{
			if (max < arr[i][2])
			{
				max = arr[i][2];
				sig = i;
			}
		}
		if (T >= arr[sig][0]) 
		{
			T -= arr[sig][0];
			val += arr[sig][0] * arr[sig][2];
			arr[sig][2] = 0;
		}
		else
		{
			val += arr[sig][2] * T;
			T = 0;
		}
	}
	printf("%lf", val);
	return 0;
}