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
	while (win<row*col- EASY_COUNT)//win<row*col- EASY_COUNT==win<71�����������׶��ų���ʱ������ѭ����������Ϸ�����ʤ����
	{
		printf("����������:\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')//����
			{
				printf("���ź�����Ϸʧ��\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//������
			{
				//����x��y��Χ�м�����
				int count=get_mine_count(mine,x,y);
				show[x][y] = count+'0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��������Ƿ�������������:\n");
		}
		
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���ʤ��\n");
		DisplayBoard(mine, row, col);
	}
}