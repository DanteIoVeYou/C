#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int CountMine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] -
		8 * '0';
}
void InitBoard(char board[ROWS][COLS], int row, int col, char ch)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ch;
		}
	}
}

void SetMine(char mine[ROWS][COLS], int row, int cow)
{
	srand((unsigned int)time(NULL));
	int mine_number = MINE;
	//1------mine
	//0------non-mine
	int x = 0;
	int y = 0;
	while (mine_number > 0)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			mine_number--;
		}
	}
}

void DisPlay(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SearchMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = ROW * COL- MINE;
	while (count)
	{
		DisPlay(show, ROW, COL);
		printf("Please choose:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL && mine[x][y] != '1')
		{
			show[x][y] = CountMine(mine, x, y) + '0';
			count--;
		}
		else
		{
			printf("Boommmmmmmmm!!!!gameover!!!\n");
			printf("Waiting......\n");
			Sleep(3000);
			system("cls");
			break;
		}
	}
	if (!count)
	{
		printf("Win!!!Congratulations!!!\n");
		printf("Waiting......\n");
		Sleep(3000);
		system("cls");
	}
}

