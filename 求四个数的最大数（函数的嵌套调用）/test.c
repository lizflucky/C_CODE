//����4���������ҳ��������������ú�����Ƕ�׵���������
#include<stdio.h>
int main()
{
	int max4(int a,int b,int c,int d);
	int a,b,c,d,max;
	printf("�������ĸ�����:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max=max4(a,b,c,d);
	printf("����������:%d\n",max);
	return 0;
}
int max4(int a,int b,int c,int d)
{
	int max2(int a,int b);
	int m;
	m=max2(a,b);
	m=max2(m,c);
	m=max2(m,d);
	return m;
}
int max2(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
//max4��Ҳ��
//	m=mxa2(max2(max2(a,b),c),d);
//return m;
//����ֱ����return����
//	return max2(max2(max2(a,b),c),d);
//int max2(int a,int b)
//{
//	return (a>=b?a:b);
//}