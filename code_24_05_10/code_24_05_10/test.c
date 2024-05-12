#define _CRT_SECURE_NO_WARNINGS

/*
//leetcode 2960. ͳ���Ѳ����豸

#include <stdio.h>
#include <stdlib.h>

int countTestedDevices(int* batteryPercentages, int batteryPercentagesSize) {
	int count = 0;
	for (int i = 0; i < batteryPercentagesSize; i++)
	{
		if (batteryPercentages[i] > count)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int batteryPercentagesSize = 0;
	int count = 0;
	printf("�������豸����:");
	scanf("%d", &batteryPercentagesSize);
	int* batteryPercentages;
	batteryPercentages = (int*)malloc(batteryPercentagesSize * sizeof(int));
	for (int i = 0; i < batteryPercentagesSize; i++)
	{
		scanf("%d", &batteryPercentages[i]);
	}
	count=countTestedDevices(batteryPercentages, batteryPercentagesSize);
	printf("�Ѳ����豸��Ϊ:%d", count);
	return 0;
}
*/

/*
//leetcode 2105. ��ֲ�ｽˮ II
#include <stdio.h>
#include <stdlib.h>

int minimumRefill(int* plants, int plantsSize, int capacityA, int capacityB) {
	int times = 0;
	int leftA = capacityA;
	int leftB = capacityB;
	int count = 0;
	if (plantsSize % 2)
	{
		times = plantsSize / 2 + 1;
	}
	else
	{
		times = plantsSize / 2;
	}
	for (int i = 0; i < times; i++)
	{
		if (i == (plantsSize - i-1))
		{
			if (leftA >= leftB)
			{
				if (leftA >= plants[i])
				{
					leftA -= plants[i];
				}
				else
				{
					leftA = capacityA;
					count++;
					leftA -= plants[i];
				}
			}
			else
			{
				if (leftB >= plants[plantsSize - i-1])
				{
					leftB -= plants[plantsSize - i-1];
				}
				else
				{
					leftB = capacityB;
					count++;
					leftB -= plants[plantsSize - i - 1];
				}
			}
		}
		else
		{
			if (leftA >= plants[i])
			{
				leftA -= plants[i];
			}
			else
			{
				leftA = capacityA;
				count++;
				leftA -= plants[i];
			}
			if (leftB >= plants[plantsSize-i-1])
			{
				leftB -= plants[plantsSize - i-1];
			}
			else
			{
				leftB = capacityB;
				count++;
				leftB -= plants[plantsSize - i-1];
			}
		}
	}
	return count;
}

int main()
{
	int capacityA, capacityB;
	int* plants;
	int plantsSize;
	int count = 0;
	printf("�������ж���ֲ��:");
	scanf("%d", &plantsSize);
	plants = (int*)malloc(plantsSize * sizeof(int));
	printf("������ֲ����Ҫ��ˮ��:");
	for (int i = 0; i < plantsSize; i++)
	{
		scanf("%d", &plants[i]);
	}
	printf("������Alice��Bob��ˮ������:");
	scanf("%d %d", &capacityA, &capacityB);
	count = minimumRefill(plants, plantsSize, capacityA, capacityB);
	printf("���¹�ˮ��Ϊ:%d", count);
	return 0;
}
*/
