#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int Ackmann(int m, int n)
{
	if (m > 0 && n == 0)
		return Ackmann(m-1, 1);
	else if (m > 0 && n > 0)
		return Ackmann(m - 1, Ackmann(m, n - 1));
	else
	return n + 1;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	printf("%d", Ackmann(n,m));
	return 0;
}