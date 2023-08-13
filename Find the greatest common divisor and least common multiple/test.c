#include<stdio.h>
int main ()
{
	int n,m,a,b;
	int gbs(int x,int y);
	int gys(int x,int y);
	printf("请输入两个整数:");
	scanf("%d%d",&n,&m);
	a=gys(n,m);
	b=gbs(n,m);
	printf("最大公约数:%d\n最小公倍数:%d\n",a,b);
	return 0;
}
int gys(int x,int y)
{
	while(x!=y)
	{
		if(x>y)
			x=x-y;
		else
			y=y-x;
	}
	return x;
}
int gbs(int x,int y)
{
	int gys(int x,int y);
	int z;
	z=x*y/gys(x,y);
	return z;
}