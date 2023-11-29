#define _CRT_SECURE_NO_WARNINGS

//À¶ÇÅÔÆ¿Î¡ª¡ª»ýÄ¾

//Ë¼Â·1
//#include <stdio.h>
//
//int Count_max(int** arr,int max,int n,int m)
//{
//	int i = 0; int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (max < arr[i][j])
//				max = arr[i][j];
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int n, m;
//	int i = 0; int j = 0; int h = 0;
//	int H;
//	int count = 0;
//	int max;
//	scanf("%d %d", &n, &m);
//	int** arr = (int**)malloc(n * sizeof(int*));
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = (int*)malloc(m * sizeof(int));
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	max = arr[0][0];
//	max = Count_max(arr, max, n, m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (max < arr[i][j])
//				max = arr[i][j];
//		}
//	}
//	scanf("%d", &H);
//	for (h = 1; h <= H; h++)
//	{
//		if (h > max)
//		{
//			printf("%d\n", count);
//			continue;
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				if (arr[i][j] >= h)
//					count++;
//			}
//		}
//		printf("%d\n", count);
//	}
//	free(arr);
//	return 0;
//}

