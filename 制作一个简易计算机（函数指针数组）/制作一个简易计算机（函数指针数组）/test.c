#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
menu()
{
	printf("#########1.Add    2.Sub#################\n");
	printf("#########3.Mul    4.Div#################\n");
	printf("#########    0.Exit   ##################\n");
	printf("########################################\n");
}
int Add(int x, int y)//加
{
	return (x + y);
}
int Sub(int x, int y)//减
{
	return (x - y);
}
int Mul(int x, int y)//乘
{
	return (x * y);
}
int Div(int x, int y)//除
{
	return (x / y);
}
//函数指针数组
int main()
{
	int input;
	int x=0;
	int y=0;
	//pfArr是一个函数指针数组   -   转移表
	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数\n");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if(input==0)
		{
			printf("退出\n");
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	} while (input);
	return 0;
}


//用switch语句的方法
//int main()
//{
//	int input;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数:\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n",Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default :
//			printf("输入错误,请重新输入\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}