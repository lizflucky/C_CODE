#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	int j = 0;
	for (i=0;i<rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}

	}
}
void DisplayBoard(char board[ROWS][ROWS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <=row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int i ;
	int j ;
	int count = EASY_COUNT;
	while (count)
	{
		i = rand() % row + 1;
		j = rand() % col + 1;
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1]
		- 8 * '0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)//win<row*col- EASY_COUNT==win<71，即当所有雷都排出来时，跳出循环，结束游戏，获得胜利。
	{
		printf("请输入坐标:\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')//是雷
			{
				printf("很遗憾，游戏失败\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//不是雷
			{
				//计算x，y周围有几个雷
				int count=get_mine_count(mine,x,y);
				show[x][y] = count+'0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入:\n");
		}
		
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，获得胜利\n");
		DisplayBoard(mine, row, col);
	}
}