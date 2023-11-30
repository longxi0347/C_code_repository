#define _CRT_SECURE_NO_WARNINGS

//À¶ÇÅÔÆ¿Î 3915 Ð¡À¶µÄÌÇ¹û½»»»
//#include <stdio.h>
//
//int change(int* arr_A, int* arr_B, int i,int N)
//{
//	int j = 0;
//	int a = 0;
//	for (j = 0; j < N; j++)
//	{
//		if (arr_B[j] != arr_A[i] && arr_A[i] != arr_A[j])
//		{
//			arr_B[i] = arr_B[j];
//			arr_B[j] = arr_A[i];
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int N = 0;
//	int i = 0;
//	int arr_A[100000] = { 0 };
//	int arr_B[100000] = { 0 };
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr_A[i]);
//	}
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr_B[i]);
//	}
//	for (i = 0; i < N; i++)
//	{
//		if (arr_A[i] == arr_B[i])
//		{
//			if (change(arr_A, arr_B, i, N))
//			{
//				printf("No");
//				break;
//			}
//		}
//		if (i == (N-1))
//			printf("Yes");
//	}
//	return 0;
//}

//À¶ÇÅÔÆ¿Î 3533 ÆåÅÌ

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n; int m;
	int i = 0; int j = 0; int l = 0;
	int x1 = 0; int x2 = 0; int y1 = 0; int y2 = 0;
	scanf("%d %d", &n, &m);
	int** arr = (int**)malloc(n * sizeof(int*));
	for (i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(n * sizeof(int));
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			arr[i][j] = 0;
		}
	}
	for (l = 0; l < m; l++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (i = (x1 - 1); i <= (x2 - 1); i++)
		{
			for (j = (y1 - 1); j <= (y2 - 1); j++)
			{
				if (arr[i][j] == 0)
					arr[i][j] = 1;
				else
					arr[i][j] = 0;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}