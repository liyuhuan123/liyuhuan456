#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void pattern(int star)
{
	for (int i = 0; i <= star; i++)//打印上半三角
	{

		for (int j = 0; j < i * 2 + 1; j++)
			printf("*");
	}
	printf("\n");
	for (int n = star - 1; n >= 0; n--)//打印下半三角
	{
		for (int m = 0; m <= n * 2 - 1; m++)
			printf("*");
	}printf("\n");
}
/*int main()
{
	int x;
	scanf("%d", &x);
	pattern(x);
	return 0;
	system("pause");
}*/
void flower(int num)
{
	//水仙花数
	int unit = num % 10;
	int ten = num % 100 / 10;
	int hundered = num / 100;
	if (unit*unit*unit + ten*ten*ten + hundered*hundered*hundered == num)
		printf("%d\t", num);
}
/*int main()
{
	int k;
	for (k = 100; k < 1000; k++)
	{
		flower(k);
	}
	return 0;
	system("pause");

}*/
void sn(int num)
{
	int sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		sum += num;
		num = num * 10 + num;
	}
	printf("%d\n", sum);

}
int main()
{
		int x;
		scanf("%d", &x);
		sn(x);
		return 0;
		system("pause");
	}

