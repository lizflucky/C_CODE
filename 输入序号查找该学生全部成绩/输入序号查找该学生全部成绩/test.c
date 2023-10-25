#define  _CRT_SECURE_NO_WARNINGS 1
//学生数为3，课程数为4
#include<stdio.h>
//int main()
//{
//	float score[][4] = { {60,70,80,90},{56,89,67,88},{34,78,90,66} };
//	float* search(float(*pointer)[4], int n);
//	float* p;
//	int i, k;
//	printf("请输入学生序号\n");
//	scanf("%d", &k);
//	p=search(score, k);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%5.2f\t", *(p + i));
//	}
//	printf("\n");
//	return 0;
//}
//float* search(float(*pointer)[4], int n)
//{
//	float* pt;
//	pt = *(pointer + n);
//	return pt;
//}
//输出不及格的成绩
int main()
{
	float score[][4] = { {60,70,80,90},{56,89,67,88},{34,78,90,66} };
	float* search(float(*pointer)[4]);
	float* p;
	int i, j;
	for (i = 0; i < 3; i++)
	{
		p = search(score + i);
		if (p == *(score + i))
		{
			printf("No.%d score:", i);
			for (j = 0; j < 4; j++)
				printf("%5.2f ", *(p + j));
			printf("\n");
		}
	}
	return 0;
}
float* search(float(*pointer)[4])
{
	int i = 0;
	float* pt;
	pt = NULL;
	for (; i < 4; i++)
	{
		if (*(*pointer + i) < 60)
			pt = *pointer;
	}
	return (pt);
}
