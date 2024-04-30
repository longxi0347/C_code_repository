#define _CRT_SECURE_NO_WARNINGS

//leetcode 2798. ����Ŀ�깤��ʱ����Ա����Ŀ

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
	printf("������Ա���ĸ���:");
	scanf("%d", &hoursSize);
	printf("������ÿ��Ա���Ĺ���ʱ��:");
	hours = (int*)malloc(hoursSize * sizeof(int));
	for (int i = 0; i < hoursSize; i++)
	{
		scanf("%d", &hours[i]);
	}
	printf("������Ҫ��Ĺ���ʱ��:");
	scanf("%d", &target);
	count = numberOfEmployeesWhoMetTarget(hours, hoursSize, target);
	printf("%d", count);
	return 0;
}