#include<stdio.h>
#include<stdlib.h>
#include<string.h>//ð�������㷨��ϰ
void buble_sort(int arr[4], int size)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < size; i++)//��һ��ѭ������size����СԪ��
	{
		for (j = 0; j < size; j++)//�ڶ���ѭ�����ҵ����˱Ƚ��е���СԪ��
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];//�������������򣬾ͽ���Ԫ��
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
	buble_sort(arr, size);//����ð��������
	for (i = 0; i < 4; i++)//��ӡ����õ���������
	{
		printf("%d\t", arr[i]);

	}
	printf("\n");
	return 0;
	system("pause");
}