#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

////ʹ��malloc������ά����
//int main()
//{
//	int row = 5;
//	int col = 4;
//	int** arr;
//	arr = (int**)malloc(row * sizeof(int*));
//	for (int i = 0; i < row; i++)
//	{
//		arr[i] = (int*)malloc(col * sizeof(int));
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			arr[i][j] += 1;
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < row; i++)
//	{
//		free(arr[i]);
//	}
//	free(arr);
//	return 0;
//}

//UDDLUULRUL
//UURLLLRRRU
//RRUURLDLRD
//RUDDDDUUUU
//URUDLLRRUU
//DURLRLDLRL
//ULLURLLRDU
//RDLULLRDDD
//UUDDUDUDLL
//ULRDLUURRR

//��ȡ�����ַ������浽��ά������

//int main()
//{
//	char arr[10][10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			scanf(" %c", &arr[i][j]);
//		}
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//# �����12.��1�����ֱ�������
//## ��Ŀ����
//����Ͱ��߽���װ�����صĲر������ر��������� $N(N \le 100)$ �ѽ�ң��� $i$ �ѽ�ҵ�
//���������ܼ�ֵ�ֱ��� $m_i, v_i(1\le m_i, v_i \le 100)$������Ͱ���һ��������Ϊ $T(T \le 1000)$ �ı�����
//������һ���а취��ȫ���Ľ�Ҷ�װ��ȥ������װ�߾����ܶ��ֵ�Ľ�ҡ����н�Ҷ���������ָ
//�ָ���Ľ��������ֵ�ȣ�Ҳ���ǵ�λ�۸񣩲��䡣���ʰ���Ͱ����������߶��ټ�ֵ�Ľ�ң�
//## �����ʽ
//��һ���������� $N, T$��
//������ $N$ �У�ÿ���������� $m_i, v_i$��
//## �����ʽ
//һ��ʵ����ʾ�𰸣������λС��
//## ���� #1
//### �������� #1
//```
//4 50
//10 60
//20 100
//30 120
//15 45
//```
//### ������� #1
//```
//240.00
//```

int main()
{
	double** arr;
	int N = 0;
	double T = 0;
	double val = 0;
	scanf("%d %lf", &N, &T);
	arr = (double**)malloc(N * sizeof(double*));
	for (int i = 0; i < N; i++)
	{
		arr[i] = (double*)malloc(3 * sizeof(double));
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%lf", &arr[i][j]);
		}
		arr[i][2] = arr[i][1] / arr[i][0];
	}
	double* arr2;
	arr2 = (double*)malloc(N * sizeof(double));
	while (T)
	{
		double max = 0;
		int sig = 0;
		for (int i = 0; i < N; i++)
		{
			if (max < arr[i][2])
			{
				max = arr[i][2];
				sig = i;
			}
		}
		if (T >= arr[sig][0]) 
		{
			T -= arr[sig][0];
			val += arr[sig][0] * arr[sig][2];
			arr[sig][2] = 0;
		}
		else
		{
			val += arr[sig][2] * T;
			T = 0;
		}
	}
	printf("%lf", val);
	return 0;
}