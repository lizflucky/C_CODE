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
		for (j = 0; j < COL; j++)//��ӡ   |   |
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
				printf("|");
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)//��ӡ---|---|---
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
	printf("�����\n");
	while (1)
	{
		printf("������Ҫ�µ�����:");
		scanf("%d%d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж�Ҫ�µ�x��y������
			{
				if (board[x - 1][y - 1] == ' ')
				{
					board[x - 1][y - 1] = '*';
					break;
				}
				else
				{
					printf("�����걻ռ�ã�����������\n ");
				}
			}
			else
			{
				printf("����Ƿ�������������\n");
			}
	}

}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1)//�������ɵ��������
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
//1������������
//0��������û��
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
				return 0;//û��
			}
		}
	}
	return 1;//����
}
char IsWin(char board[ROW][COL], int rwo, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rwo; i++)//�жϽ��,������
	{
		if (board[i][0] == board[i][1] && board[i][1]==board[i][2] && board[i][1] != ' ')
			return (board[i][1]);
	}
	for (j = 0; j < col; j++)//������
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return (board[1][j]);
	}
	//�ж������Խ�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return (board[1][1]);
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return (board[1][1]);
	//�ж�ƽ��
	if (1 == IsFull(board,ROW,COL))
	{
		return ('Q');
	}
	return 'C';
}