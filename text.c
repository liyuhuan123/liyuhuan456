#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void wannum(int x)
{
	int i = 0;
	int sum = 0;
	for (i = 1; i < x; i++)
	{
		if (x%i == 0)
			sum += i;
	}
	if (sum == i)
		printf("%d\t", x);
}
int main()
{
	int i = 1;
	for (i = 1; i <= 1000; i++)
	{
		wannum(i);
	}
	printf("\n");
	return 0;
	system("pause");

}