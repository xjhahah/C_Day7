#include <stdio.h>
#include <math.h>
#include <string.h>
#include <assert.h>

//1 �˷��ھ���
void Test1()
{
	for (int i = 1; i < 10; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("%d*%d=%-3d", i, j,i*j);
		}
		printf("\n");
	}
}

//2 ʹ�ú���ʵ���������Ľ����� 
void SwapTwoNum()
{
	int a = 0;
	int b = 0;
	printf("��������Ҫ����������");
	scanf_s("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n", a, b);
}

//3 ʵ��һ�������ж�year�ǲ������ꡣ 
void Test3()
{
	int year = 0;
	printf("��������Ҫ��ѯ����ݣ�");
	scanf_s("%d", &year);
	if (!(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("������\n");
	}
	else {
		printf("��ʪ����\n");
	}
}

//4 �ж�һ�����ǲ���������
int Prime()
{
	int i = 0;
	printf("��������Ҫ�ж�����");
	scanf_s("%d", &i);
	if (1 == i)
		return 1;
	for (int j = 2; j < sqrt(i); ++j)
	{
		if (i%j != 0)
		{
			return 1;
		}
	}
	return -1;
}
void Test4()
{
	int ret = 0;
	ret = Prime();
	if (ret == 1)
	{
		printf("����������...\n");
	}
	else
	{
		printf("������������\n");
	}
}

//5 ����һ�����飬 ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�
void InitArr(int* arr,int len)
{
	
	for (int i = 0; i < len; ++i)
	{
		arr[i] = i;
	}
	for (int i = 0; i < len; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//void EmptyArr(int* arr,int len)
//{
//	assert(arr);
//	for (int i = 0; i < len; ++i)
//	{
//		arr[i] = 0;
//	}
//}
void ReserveArr(int* arr,int len)
{
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		int tmp = 0;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		++left;
		--right;
	}
	for (int i = 0; i < len; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Test5()
{
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	InitArr(arr,len);
	//EmptyArr(arr,len);
	ReserveArr(arr,len);
}
int main()
{
	//Test1();
	//SwapTwoNum();
	//Test3();
	//Test4();
	Test5();
	return 0;
}