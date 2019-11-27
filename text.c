#include<stdio.h>
#include<stdlib.h>
#include<string.h>//冒泡排序算法练习
void buble_sort(int arr[4], int size)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < size; i++)//第一重循环，找size次最小元素
	{
		for (j = 0; j < size; j++)//第二重循环，找到这趟比较中的最小元素
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];//不符合升序排序，就交换元素
				arr[i] = arr[j];
				arr[j] = tmp;
			}

		}
	}
}
int main()
{
	int i;
	int arr[4] = { 6, 9, 4, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	buble_sort(arr, size);//调用冒泡排序函数
	for (i = 0; i < 4; i++)//打印排序好的有序数组
	{
		printf("%d\t", arr[i]);

	}
	printf("\n");
	return 0;
	system("pause");
}