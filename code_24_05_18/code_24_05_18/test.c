#define _CRT_SECURE_NO_WARNINGS

//leetcode 2644. 找出可整除性得分最大的整数

#include <stdio.h>
#include <stdlib.h>

int maxDivScore(int* nums, int numsSize, int* divisors, int divisorsSize)
{
	int count = 0;
	int res = 0;
	int max = 0;
	int* arr = (int*)malloc(divisorsSize * sizeof(int));
	for (int i = 0; i < divisorsSize; i++)
	{
		count = 0;
		for (int j = 0; j < numsSize; j++)
		{
			if (nums[j] % divisors[i] == 0)
				count++;
		}
		arr[i] = count;
	}
	max = arr[0];
	res = divisors[0];
	for (int i = 1; i < divisorsSize; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			res = divisors[i];
		}
		else if (arr[i] == max && divisors[i] < res)
		{
			res = divisors[i];
		}
	}
	return res;
}

int main()
{
	int* nums, * divisors;
	int numsSize, divisorsSize;
	int result;
	printf("请输入nums的大小:");
	scanf("%d", &numsSize);
	nums = (int*)malloc(numsSize * sizeof(int));
	printf("请输入divisors的大小:");
	scanf("%d", &divisorsSize);
	divisors = (int*)malloc(divisorsSize * sizeof(int));
	printf("请输入nums:\n");
	for (int i = 0; i < numsSize; i++)
	{
		scanf("%d", &nums[i]);
	}
	printf("请输入divisors:\n");
	for (int i = 0; i < divisorsSize; i++)
	{
		scanf("%d", &divisors[i]);
	}
	result = maxDivScore(nums, numsSize, divisors, divisorsSize);
	printf("得分最大的数为:%d", result);
	return 0;
}