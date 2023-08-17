#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	void paixu(int a[], int sz);
	int i, a[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(a) / sizeof(a[0]);//计算出数组a中元素的个数
	//对数组a进行排序排成升序
	//对数组a进行传参，实际上传过去的是数组a首元素的的地址&a[0]
	paixu(a, sz);//冒泡排序函数
	for (i = 0; i < sz; i++)
	{
		printf("%2d", a[i]);
	}
	return 0;
}
void paixu(int a[], int sz)
{
	//确定冒泡排序的趟数
	int j, i, temp, k;
	for (i = 0; i < sz - 1; i++)
	{
		k=1;//假设这一趟冒泡排序已经有序
		//每一趟冒泡排序
		for (j = 0; j < sz - 1 - i;j++)
		{
			if (a[j] > a[j + 1])
				temp = a[j + 1];
			    a[j + 1] = a[j];
				a[j] = temp;
				k = 0;//本趟排序的数据不完全有序
		}
		if (k == 1)//k==1说明已经有序
			break;
	}
}
//sizeof(数组名)-数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节