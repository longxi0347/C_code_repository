#define _CRT_SECURE_NO_WARNINGS

//leetcode 826. 安排工作以达到最大收益

#include <stdio.h>
#include <stdlib.h>

int maxProfitAssignment(int* difficulty, int difficultySize, int* profit, int profitSize, int* worker, int workerSize) 
{
	int sum_profit = 0;
	int max = 0;
	int max_num = 0;
	int max_li = 0;
	int temp_num = 0;
	int* sort_arr = (int*)malloc(difficultySize * sizeof(int));
	//首先对工作的利润从大到小排序,利用另一个数组存利润和难度的索引
	for (int i = 0; i < difficultySize; i++)
	{
		sort_arr[i] = i;
	}
	for (int i = 0; i < profitSize-1; i++)
	{
		max = profit[sort_arr[i]];
		max_num = sort_arr[i];
		max_li = i;
		for (int j = i + 1; j < profitSize; j++)
		{
			if (profit[sort_arr[j]] > max)
			{
				max = profit[sort_arr[j]];
				max_num = sort_arr[j];
				max_li = j;
			}
		}
		temp_num = sort_arr[i];
		sort_arr[i] = max_num;
		sort_arr[max_li] = temp_num;
	}
	//分配工作
	for (int i = 0; i < workerSize; i++)
	{
		for (int j = 0; j < difficultySize; j++)
		{
			if (worker[i] >= difficulty[sort_arr[j]])
			{
				sum_profit += profit[sort_arr[j]];
				break;
			}
		}
	}
	return sum_profit;
}

int main()
{
	int difficultySize, profitSize, workerSize;
	int* difficulty, * profit, * worker;
	int result = 0;
	printf("请输入工作的个数:");
	scanf("%d", &difficultySize);
	profitSize = difficultySize;
	printf("请输入员工的个数:");
	scanf("%d", &workerSize);
	difficulty = (int*)malloc(difficultySize * sizeof(int));
	profit = (int*)malloc(profitSize * sizeof(int));
	worker = (int*)malloc(workerSize * sizeof(int));
	printf("请输入工作难度:\n");
	for (int i = 0; i < difficultySize; i++)
	{
		scanf("%d", &difficulty[i]);
	}
	printf("请输入工作利润:\n");
	for (int i = 0; i < profitSize; i++)
	{
		scanf("%d", &profit[i]);
	}
	printf("请输入员工能力:\n");
	for (int i = 0; i < workerSize; i++)
	{
		scanf("%d", &worker[i]);
	}
	result = maxProfitAssignment(difficulty, difficultySize, profit, profitSize, worker, workerSize);
	printf("最大利润为:%d", result);
	return 0;
}