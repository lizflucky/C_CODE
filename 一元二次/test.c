#define  _CRT_SECURE_NO_WARNINGS 1
//��ax*x+bx+c=0�ĸ�����3�������ֱ��󵱣�b*b-4ac����0��С��0������0ʱ�ĸ�����������
//������������a��b��c��ֵ
#include<stdio.h>
#include<math.h>
float x1, x2, i, p, q;
void day0(float a, float b)//����������ȵ�ʵ����
{

	x1 = (-b + sqrt(i)) / (2 * a);
	x2 = (-b - sqrt(i)) / (2 * a);
}
void xy0(float a, float b)//û��ʵ�������������
{
	p = -b / (2 * a);
	q = sqrt(-i) / (2 * a);
}
void dy0(float a, float b)//��������ȵ�ʵ����
{
	x1 = x2 = (-b) / (2 * a);
}
int main()
{
	int a, b, c;
	printf("������a b c:");
	scanf("%d%d%d", &a, &b, &c);
	printf("���ʽ:%d*x^2+%dx+%d=0\n", a, b, c);
	i = b * b - 4 * a * c;
	if (i > 0)
	{
		day0(a, b);
		printf("i>0�ĸ�Ϊ: x1=%f x2=%f\n", x1, x2);
	}
	else if (i < 0)
	{
		xy0(a, b);
		printf("i<0�ĸ�Ϊ:x1=%f+%fi x2=%f-%fi\n", p, q, p, q);
	}
	else
	{
		dy0(a, b);
		printf("i=0�ĸ�Ϊ:x1=%f x2=%f\n", x1, x2);
	}
	return 0;
}
