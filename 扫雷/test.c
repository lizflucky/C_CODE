#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("******************************\n");
	printf("********1.play****************\n");
	printf("********0.exit****************\n");
	printf("******************************\n");
}
void game()
{
	//雷的信息存储
	char mine[ROWS][COLS] = { 0 };//布置好雷的信息
	char show[ROWS][COLS] = { 0 };//排查雷的信息
	InitBoard(mine, ROWS, COLS, '0');//初始化
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);//打印棋盘
	DisplayBoard(show, ROW, COL);
	SetMine(mine,ROW,COL);//布置雷
	//DisplayBoard(mine, ROW, COL);//打印棋盘
	FindMine(mine, show, ROW, COL);//扫雷
}
void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
				game();
				break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
}
int main()
{
	test();
		return 0;
}