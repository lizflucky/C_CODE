#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)//打印   |   |
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
				printf("|");
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)//打印---|---|---
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while (1)
	{
		printf("请输入要下的坐标:");
		scanf("%d%d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)//判断要下的x，y的坐标
			{
				if (board[x - 1][y - 1] == ' ')
				{
					board[x - 1][y - 1] = '*';
					break;
				}
				else
				{
					printf("该坐标被占用，请重新输入\n ");
				}
			}
			else
			{
				printf("坐标非法，请重新输入\n");
			}
	}

}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)//电脑生成的随机坐标
	{
		x = rand()%row;
		y = rand()%col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//1代表棋盘满了
//0代表棋盘没满
IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//没满
			}
		}
	}
	return 1;//满了
}
char IsWin(char board[ROW][COL], int rwo, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rwo; i++)//判断结果,横三行
	{
		if (board[i][0] == board[i][1] && board[i][1]==board[i][2] && board[i][1] != ' ')
			return (board[i][1]);
	}
	for (j = 0; j < col; j++)//竖三列
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return (board[1][j]);
	}
	//判断两个对角
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return (board[1][1]);
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return (board[1][1]);
	//判断平局
	if (1 == IsFull(board,ROW,COL))
	{
		return ('Q');
	}
	return 'C';
}