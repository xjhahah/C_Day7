#include <stdio.h>


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
int main()
{
	//Test1();
	SwapTwoNum();
	return 0;
}