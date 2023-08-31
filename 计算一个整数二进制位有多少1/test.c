#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int count_1(int n);
	int a,count;
	printf("请输入一个整数\n");
	scanf("%d", &a);
	count = count_1(a);
	printf("count=%d", count);
	return 0;
}
//int count_1(unsigned int n)
//{
//	int count=0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int count_1(int n)
//{
//	int i = 0,count=0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n >> i & 1==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
int count_1(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}
//n=n&(n-1)
//假如n=13
//n     1101
//n-1   1100
//
//n     1100
//n-1   1010
//
//n     1000
//n-1   0100
//
//n     0000 每赋值一次n减少一个1
