#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	a = 234;
	b = ~a;
	a = ~a;
	printf("b=%d\n", b);
	printf("a=%x\n", a);
	return 0;
	system("pause");
}