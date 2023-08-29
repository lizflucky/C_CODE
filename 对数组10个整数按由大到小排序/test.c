//用选择法对数组中10个整数按由小到大进行排序
//所谓选择法就是先将10个数最小的数与a[0]进行对换；再将a[1]-a[9]中最小的数与a[1]对换......每比较一轮，
//找出一个未经排序的数中最小的一个。共比较9轮
#include<stdio.h>
int main ()
{
	void sort(int array[],int n);
	int i,a[10];
	printf("请输入10个整数:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,10);
	printf("由小到大排序:\n");
	for(i=0;i<10;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
	return 0;
}
void sort(int array[],int n)
{
	int i,k,j,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		if(array[j]<array[k])
			k=j;
		t=array[k];
		array[k]=array[i];
		array[i]=t;
	}
}