#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	void inv(int * x, int n);
	int a[10] = { 3,7,9,11,0,6,7,5,4,2 };
	int i;
	printf("交换前:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("交换后:\n");
	inv(a, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
void inv(int * x, int n)
{
	int *j,*p,*i, temp, m = (n - 1) / 2;
	j = x + n - 1; i = x; p = x + m;
	for (; i <= p; i++,j--)
	{
		temp = *i;
		*i = *j;
		*j= temp;
	}
	return;
}

//int main()
//{
//	void inv(int x[], int n);
//	int a[10] = { 3,7,9,11,0,6,7,5,4,2 };
//	int i;
//	printf("交换前:\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	printf("交换后:\n");
//	inv(a, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void inv(int x[], int n)
//{
//	int j, i, temp, m=(n-1)/2;
//	for (i = 0; i <= m; i++)
//	{
//		j = n - 1 - i;
//		temp = x[i];
//		x[i] = x[j];
//		x[j] = temp;
//	}
//	return;
//}
