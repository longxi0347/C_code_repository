#define _CRT_SECURE_NO_WARNINGS

//leetcode 994. 腐烂的橘子

#include <stdio.h>
#include <stdlib.h>

int orangesRotting(int** grid, int gridSize, int* gridColSize) 
{
	int count = 0;
	int count1 = 0;
	int count2 = 0;
	while (1)
	{
		count1 = 0;
		for (int i = 0; i < gridSize; i++)
		{
			for (int j = 0; j < gridColSize[i]; j++)
			{
				if (grid[i][j] == 1)
				{
					count1++;
					if (i > 0)
					{
						if (grid[i - 1][j] == 2)
						{
							grid[i][j] = 3;
						}
					}
					if (i+1  < gridSize)
					{
						if (grid[i + 1][j] == 2)
						{
							grid[i][j] = 3;
						}
					}
					if ( j+1  < gridColSize[i])
					{
						if (grid[i][j + 1] == 2)
						{
							grid[i][j] = 3;
						}
					}
					if (j > 0)
					{
						if (grid[i][j - 1] == 2)
						{
							grid[i][j] = 3;
						}
					}
				}
			}
		}
		for (int i = 0; i < gridSize; i++)
		{
			for (int j = 0; j < gridColSize[i]; j++)
			{
				if (grid[i][j] == 3)
					grid[i][j] = 2;
			}
		}
		if (count1 == 0)
			break;
		count++;
		if (count2 != count1)
			count2 = count1;
		else
			return -1;
	}
	return count;
}

int main()
{
	int** grid;
	int gridSize;
	int* gridColSize;
	int result = 0;
	int n = 0;
	printf("请输入网格的行数:");
	scanf("%d", &gridSize);
	grid = (int**)malloc(gridSize * sizeof(int*));
	gridColSize = (int*)malloc(gridSize * sizeof(int));
	printf("请输入网格的列数:");
	scanf("%d", &n);
	for (int i = 0; i < gridSize; i++)
	{
		gridColSize[i] = n;
		grid[i] = (int*)malloc(n*sizeof(int));
	}
	printf("请输入网格中的数字:");
	for (int i = 0; i < gridSize; i++)
	{
		for (int j = 0; j < gridColSize[i]; j++)
		{
			scanf("%d", &grid[i][j]);
		}
	}
	result = orangesRotting(grid, gridSize, gridColSize);
	printf("最小分钟数为:%d", result);
	return 0;
}

/*
感染问题解法:
1.找到每一次感染时发生变化的点
2.记录变化的点并修改
(1)时间优化法:使用两个二维数组,一个记录感染过程,一个记录每一次变化的点(最后要将这张表归零),如果这个点在另一个数组中有记录，则不去感染其他点
(2)空间优化法:使用一个特殊标记标记变化的点,一次变化完后遍历二维数组进行修改
3.得出结果
*/