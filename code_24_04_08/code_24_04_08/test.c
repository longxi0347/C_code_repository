#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int count_jiesum(int m)
{
	int sum_1 = 1;
	while (m != 0)
	{
		sum_1 *= m;
		m--;
	}
	return sum_1;
}

int main()
{
	int n = 0;
	int m = 1;
	int sum = 0;
	int sum_2 = 0;
	int res = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	for (m = 1; sum_2 <= sum; m++)
	{
		sum_2 = count_jiesum(m);
		if (sum % sum_2 == 0)
		{
			res = m;
		}
	}
	printf("%d", res);
	free(arr);
	return 0;
}