#include<stdio.h.>
#include<stdlib.h>
/*void game()
{
	int tuGuess = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字\n");
		scanf("%d", &input);
		if (input > tuGuess)
		{
			printf("猜大了\n");
		}
		else if (input < tuGuess)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了！");
			break;

		}
	}
}
int main()
{
	int input = 0;
	while (1)
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 2:
			break;
		default:
			printf("输入有误\n");
			break;
		}
		}*/
int mian()
{
	char arr1[] = "I LOVE YOU!";
	char arr2[] = "###########";
	int left = 0;
	int right = 10;
	printf("%s\n", arr2);
	while(left <= right)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}

	system("pause");
	return 0;
}