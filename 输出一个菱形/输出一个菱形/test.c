#define  _CRT_SECURE_NO_WARNINGS 1
//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
//   *********
//    *******
//     *****
//      ***
//       *
//���һ���������Ƶ�����
#include<stdio.h>
int main()
{
	int line;
	scanf("%d", &line);
	int i = 0;
	for (i = 0; i < line; i++)//��ӡ�ϰ벿��
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j <2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)//��ӡ�°벿��
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j <2*(line-1-i)-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}