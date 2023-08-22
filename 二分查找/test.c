#include<stdio.h>
int main ()
{
	int search(int array[],int k,int sz);
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int sz=sizeof(a)/sizeof(a[0]);//求数组a每个元素字节大小
	int ret=search(a,k,sz);
	if(ret==-1)
	{
		printf("找不到该数字\n");
	}
	else
	{
		printf("找到了，下标是:%d\n",ret);
	}
	return 0;
}
int search(int array[],int k,int sz)
{
	int left=0;//数组最左边下标
	int right=sz-1;//数组最右边下标
		while(left<=right)
		{
			//判断k的大小
			int mid=(left+right)/2;
			if(array[mid]<k)
				left=mid+1;
			else if(array[mid]>k)
				right=mid-1;
			else
				return mid;
		}
		return -1;//若返回-1则代表数组中没有与k相等的数字
}