#define _CRT_SECURE_NO_WARNINGS

//牛客网 BC61 牛牛的二三七整除
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//		printf("2 ");
//	if (a % 3 == 0)
//		printf("3 ");
//	if (a % 7 == 0)
//		printf("7");
//	if (a % 2 != 0 && a % 3 != 0 && a % 7 != 0)
//		printf("n");
//	return 0;
//}

//牛客网 BC62 统计数据正负个数
//#include <stdio.h>
//int main()
//{
//	int positive = 0;
//	int negative = 0;
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > 0)
//			positive++;
//		if (arr[i] < 0)
//			negative++;
//	}
//	printf("positive:%d\n", positive);
//	printf("negative:%d", negative);
//	return 0;
//}

//牛客网 BC63 网购
//#include <stdio.h>
//int main()
//{
//	float val = 0;
//	int mon, day, tic;
//	float pay = 0;
//	scanf("%f %d %d %d", &val, &mon, &day, &tic);
//	pay = val;
//	if (mon == 11 && day == 11)
//		pay = 0.7 * pay;
//	else if (mon == 12 && day == 12)
//		pay = 0.8 * pay;
//	if (tic)
//		pay -= 50;//用优惠券之后钱可能为负数
//	if (pay < 0)
//		pay = 0;
//	printf("%.2f", pay);
//	return 0;
//}