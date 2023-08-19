#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
menu()
{
	printf("***************************\n");
	printf("****1.play    0.exit*******\n");
	printf("***************************\n");
}
game()//整个游戏算法的实现
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//数组---存放走出棋盘的信息
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下
		DisplayBoard(board, ROW, COL);//打印棋盘
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下
		DisplayBoard(board, ROW, COL);//打印棋盘
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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
		case 0 :
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	}
		while (input);
}
int main()
{
	test();
	return 0;
}