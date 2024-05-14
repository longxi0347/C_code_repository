#define _CRT_SECURE_NO_WARNINGS

//leetcode 994. ���õ�����

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
	printf("���������������:");
	scanf("%d", &gridSize);
	grid = (int**)malloc(gridSize * sizeof(int*));
	gridColSize = (int*)malloc(gridSize * sizeof(int));
	printf("���������������:");
	scanf("%d", &n);
	for (int i = 0; i < gridSize; i++)
	{
		gridColSize[i] = n;
		grid[i] = (int*)malloc(n*sizeof(int));
	}
	printf("�����������е�����:");
	for (int i = 0; i < gridSize; i++)
	{
		for (int j = 0; j < gridColSize[i]; j++)
		{
			scanf("%d", &grid[i][j]);
		}
	}
	result = orangesRotting(grid, gridSize, gridColSize);
	printf("��С������Ϊ:%d", result);
	return 0;
}

/*
��Ⱦ����ⷨ:
1.�ҵ�ÿһ�θ�Ⱦʱ�����仯�ĵ�
2.��¼�仯�ĵ㲢�޸�
(1)ʱ���Ż���:ʹ��������ά����,һ����¼��Ⱦ����,һ����¼ÿһ�α仯�ĵ�(���Ҫ�����ű����),������������һ���������м�¼����ȥ��Ⱦ������
(2)�ռ��Ż���:ʹ��һ�������Ǳ�Ǳ仯�ĵ�,һ�α仯��������ά��������޸�
3.�ó����
*/