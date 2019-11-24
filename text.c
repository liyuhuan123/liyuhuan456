#include<stdio.h>
#include<stdlib.h>
int main( )
{
	/*int a = 1; int b = 2; int t;
	t = a;
	a = b;
	b = t;
	printf("a=%d,b=%d\n", a, b);*/
	/*int arr[10] = { 1, 2, 4, 3, 7, 5, 6, 8, 9, 0 };
	int i,max;
	max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}

	}
	printf("max=%d\n", max);*/
	/*int a=2, b=3, c=1, t;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d,%d,%d\n", a, b, c);*/
	int a = 23, b = 69, i,j;
	for (i = 1; i <= a&&i <= b; ++i)
	{
		if (a%i == 0 && b%i == 0)
			j = i;
	}
	printf("\n最大公约数是:%d\n", j);
	system("pause");
	return 0;
}