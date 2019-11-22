#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	/*int n, i=0, j, sum = 0;
	scanf("%d\n", &n);
	while (i < n)
	{
		scanf("%d", &i);
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (i >= 0)
			sum += i;
		else
			continue;
	}
	printf("%d", sum);*/
	/*int a, b;
	scanf("%d", &b);
	a = 2;
	while (a<b)
	{
		if (b%a == 0)
			break;
		a++;
	}
	if (a == b)
		printf("yes\n", b);
	else
		printf("no\n", b);*/
	int N;
	int i;
	int num = 0;
	scanf("%d", &N);
	printf("%d\n", N);
	for (i = 1; i <= N; i++)
	{
		num += (i % 2 == 0) + (i % 3 == 0) + (i % 5 == 0) - (i % 2 == 0) && (i % 5 == 0) && (i % 3 == 0) - (i % 2 == 0) && (i % 5 == 0) - (i % 3 == 0) && (i % 5 == 0) - (i % 2 == 0) && (i % 3 == 0);

	}
	system("pause");
	return 0;
}