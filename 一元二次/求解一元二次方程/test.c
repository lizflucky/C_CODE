#define  _CRT_SECURE_NO_WARNINGS 1
//求ax*x+bx+c=0的根，用3个函数分别求当：b*b-4ac大于0、小于0、等于0时的根并输出结果。
//从主函数输入a，b，c的值
#include<stdio.h>
#include<math.h>
float x1, x2, i, p, q;
void day0(float a, float b)//有两个不相等的实数根
{

	x1 = (-b + sqrt(i)) / (2 * a);
	x2 = (-b - sqrt(i)) / (2 * a);
}
void xy0(float a, float b)//没有实数根，但有虚根
{
	p = -b / (2 * a);
	q = sqrt(-i) / (2 * a);
}
void dy0(float a, float b)//有两个相等的实数根
{
	x1 = x2 = (-b) / (2 * a);
}
int main()
{
	int a, b, c;
	printf("请输入a b c:");
	scanf("%d%d%d", &a, &b, &c);
	printf("表达式:%d*x^2+%dx+%d=0\n", a, b, c);
	i = b * b - 4 * a * c;
	if (i > 0)
	{
		day0(a, b);
		printf("i>0的根为: x1=%f x2=%f\n", x1, x2);
	}
	else if (i < 0)
	{
		xy0(a, b);
		printf("i<0的根为:x1=%f+%fi x2=%f-%fi\n", p, q, p, q);
	}
	else
	{
		dy0(a, b);
		printf("i=0的根为:x1=%f x2=%f\n", x1, x2);
	}
	return 0;
}
