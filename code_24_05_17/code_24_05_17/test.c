#define _CRT_SECURE_NO_WARNINGS

//leetcode 826. ���Ź����Դﵽ�������

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
	//���ȶԹ���������Ӵ�С����,������һ�������������Ѷȵ�����
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
	//���乤��
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
	printf("�����빤���ĸ���:");
	scanf("%d", &difficultySize);
	profitSize = difficultySize;
	printf("������Ա���ĸ���:");
	scanf("%d", &workerSize);
	difficulty = (int*)malloc(difficultySize * sizeof(int));
	profit = (int*)malloc(profitSize * sizeof(int));
	worker = (int*)malloc(workerSize * sizeof(int));
	printf("�����빤���Ѷ�:\n");
	for (int i = 0; i < difficultySize; i++)
	{
		scanf("%d", &difficulty[i]);
	}
	printf("�����빤������:\n");
	for (int i = 0; i < profitSize; i++)
	{
		scanf("%d", &profit[i]);
	}
	printf("������Ա������:\n");
	for (int i = 0; i < workerSize; i++)
	{
		scanf("%d", &worker[i]);
	}
	result = maxProfitAssignment(difficulty, difficultySize, profit, profitSize, worker, workerSize);
	printf("�������Ϊ:%d", result);
	return 0;
}