//��һ��3*3�����;���Խ���Ԫ��֮��
#include<stdio.h>
int main()
{
	int n=0,m=0;
	int i,j;
	int sz[3][3];
	printf("������3*3���������\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			n=n+sz[i][j];
			 if(i+j==2)
				m=m+sz[i][j];
		}

	}
	printf("%d %d\n",n,m);
	return 0;
}