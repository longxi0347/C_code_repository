#define _CRT_SECURE_NO_WARNINGS

//leetcode 2798. 满足目标工作时长的员工数目

#include <stdio.h>
#include <stdlib.h>

int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) 
{
	int count = 0;
	for (int i = 0; i < hoursSize; i++)
	{
		if (hours[i] >= target)
			count++;
	}
	return count;
}

int main()
{
	int* hours;
	int target = 0;
	int hoursSize = 0;
	int count = 0;
	printf("请输入员工的个数:");
	scanf("%d", &hoursSize);
	printf("请输入每名员工的工作时长:");
	hours = (int*)malloc(hoursSize * sizeof(int));
	for (int i = 0; i < hoursSize; i++)
	{
		scanf("%d", &hours[i]);
	}
	printf("请输入要求的工作时长:");
	scanf("%d", &target);
	count = numberOfEmployeesWhoMetTarget(hours, hoursSize, target);
	printf("%d", count);
	return 0;
}