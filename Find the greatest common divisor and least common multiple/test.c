#include<stdio.h>
int main ()
{
	int n,m,a,b;
	int gbs(int x,int y);
	int gys(int x,int y);
	printf("��������������:");
	scanf("%d%d",&n,&m);
	a=gys(n,m);
	b=gbs(n,m);
	printf("���Լ��:%d\n��С������:%d\n",a,b);
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