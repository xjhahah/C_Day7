#include <stdio.h>
#include <math.h>

//1 乘法口诀表
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

//2 使用函数实现两个数的交换。 
void SwapTwoNum()
{
	int a = 0;
	int b = 0;
	printf("请输入你要交换的数：");
	scanf_s("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n", a, b);
}

//3 实现一个函数判断year是不是润年。 
void Test3()
{
	int year = 0;
	printf("请输入你要查询的年份：");
	scanf_s("%d", &year);
	if (!(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("是闰年\n");
	}
	else {
		printf("不湿润年\n");
	}
}

//4 判断一个数是不是素数。
int Prime()
{
	int i = 0;
	printf("请输入你要判断数：");
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
		printf("该数是素数...\n");
	}
	else
	{
		printf("该数不是素数\n");
	}
}
int main()
{
	//Test1();
	//SwapTwoNum();
	//Test3();
	Test4();
	return 0;
}