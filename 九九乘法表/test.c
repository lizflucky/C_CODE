#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=9;i++)//��ӡ����
	{
		int j;
		for(j=1;j<=i;j++)//��ӡ��
		{
			printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//..... ..... .....
//9*1=9 9*2=18 ....