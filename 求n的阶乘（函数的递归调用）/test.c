//�õݹ鷽����n!
//�����n���ܴ���12���������13��13�Ľ׳˴���int�ܱ�ʾ�������2147483647��
#include<stdio.h>
int main ()
{
	int fac(int n);
	int n,y;
	printf("�������һ������:");
	scanf("%d",&n);
	y=fac(n);
	printf("%d!=%d\n",n,y);
	return 0;
}
int fac(int n)
{
	int f;
	if(n<0)
		printf("n����С��0\n");
	else if(n==0||n==1)
		f=1;
	else
		f=fac(n-1)*n;
		return f;
}