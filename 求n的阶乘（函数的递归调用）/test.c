//用递归方法求n!
//输入的n不能大于12，如果输入13，13的阶乘大于int能表示的最大数2147483647。
#include<stdio.h>
int main ()
{
	int fac(int n);
	int n,y;
	printf("请输入的一个整数:");
	scanf("%d",&n);
	y=fac(n);
	printf("%d!=%d\n",n,y);
	return 0;
}
int fac(int n)
{
	int f;
	if(n<0)
		printf("n不能小于0\n");
	else if(n==0||n==1)
		f=1;
	else
		f=fac(n-1)*n;
		return f;
}