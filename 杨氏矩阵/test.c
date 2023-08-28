#define  _CRT_SECURE_NO_WARNINGS 1
//有一个数字矩阵，矩阵的每行从左到右都是递增的，矩阵从上到下都是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
#include<stdio.h>
int Findnum(int arr[3][3], int k, int row, int col)
{
	int x = 0;//行的坐标
	int y = col - 1;//列的坐标
	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)//与数组arr右上角的元素判断，大于k则该列没有k这个元素
		{
			y--;
		}
		else if (arr[x][y] < k)//小于k则该行没有k这个元素
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	//没有找到该元素
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int ret = Findnum(arr, k, 3, 3);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}

//找到，并打印出下标



//int Findnum(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;//行的坐标
//	int y = *py - 1;//列的坐标
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)//与数组arr右上角的元素判断，大于k则该列没有k这个元素
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)//小于k则该行没有k这个元素
//		{
//			x++;
//		}
//		else
//		{
//			*px=x;
//			*py=y;
//			return 1;
//		}
//	}
//	//没有找到该元素
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = Findnum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是:%d,%d\n", x, y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}