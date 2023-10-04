//求一个3*3的整型矩阵对角线元素之和
#include<stdio.h>
int main()
{
	int n=0,m=0;
	int i,j;
	int sz[3][3];
	printf("请输入3*3矩阵的数字\n");
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