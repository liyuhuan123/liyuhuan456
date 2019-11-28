#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, min, tmp, a[10] = { 2, 9, 6, 4, 7, 3, 1, 0, 5, 8 };
	for (i = 0; i < 9; i++)
	{
		min = i;
		for (j = i + 1; j < 10; j++)
		{
			if (a[min]>a[j])
				min = j;
			tmp = a[i];
			a[i] = a[min];
			a[min] = tmp;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
	system("pause");
}