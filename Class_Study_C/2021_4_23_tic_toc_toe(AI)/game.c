#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitializeBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	/*
	   |   |   
	---|---|---
	   |   |
    ---|---|---
	   |   |
	 */
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("Please choose the coordinate:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("You input is illegel.\nPlease input again\n");
		}
	}

}

int CountNum(char board[ROW][COL], int row, int col)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
				count++;
		}
	}
	return count;
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	if (CountNum(board, ROW, COL) == 0)
	{
		board[0][0] = '#';
	}
	if (CountNum(board, ROW, COL) == 2)
	{

		//5 types , 8 situations

		// 1
		if (board[0][1] == '*')
		{
			board[2][0] = '#';
		}
		// 2
		if (board[1][0] == '*')
		{
			board[0][2] = '#';
		}
		// 3 
		if (board[0][2] == '*')
		{
			board[2][2] = '#';
		}
		// 4
		if (board[2][0] == '*')
		{
			board[2][2] = '#';
		}
		// 5
		if (board[2][1] == '*')
		{
			board[2][0] = '#';
		}
		// 6
		if (board[1][2] == '*')
		{
			board[0][2] = '#';
		}
		// 7
		if (board[1][1] == '*')
		{
			board[0][1] = '#';
		}
		// 8
		if (board[2][2] == '*')
		{
			board[0][2] = '#';
		}
	}
	if (CountNum(board, ROW, COL) == 4)
	{
		// 1@1
		if (board[0][1] == '*' && board[2][0] == '#')
		{
			if (board[1][0] == '*')
			{
				board[2][2] = '#';
			}
			else
			{
				board[1][0] = '#';
			}
		}
		// 2@1
		if (board[1][0] == '*' && board[0][2] == '#')
		{
			if (board[0][1] == '*')
			{
				board[2][2] = '#';
			}
			else
			{
				board[0][1] = '#';
			}
		}
		// 3@1
		if (board[0][2] == '*' && board[2][2] == '#')
		{
			if (board[1][1] == '*')
			{
				board[2][0] = '#';
			}
			else
			{
				board[1][1] = '#';
			}
		}
		// 4@1
		if (board[2][0] == '*' && board[2][2] == '#')
		{
			if (board[1][1] == '*')
			{
				board[0][2] = '#';
			}
			else
			{
				board[1][1] = '#';
			}
		}
		// 5@1
		if (board[2][1] == '*' && board[2][0] == '#')
		{
			if (board[1][0] == '*')
			{
				board[0][2] = '#';
			}
			else
			{
				board[1][0] = '#';
			}
		}
		// 6@1
		if (board[1][2] == '*' && board[0][2] == '#')
		{
			if (board[0][1] == '*')
			{
				board[2][0] = '#';
			}
			else
			{
				board[0][1] = '#';
			}
		}
		// 7@1
		if (board[1][1] == '*' && board[0][1] == '#')
		{
			if (board[0][2] == '*')
			{
				board[2][0] = '#';
			}
			else
			{
				board[0][2] = '#';
			}
		}
		// 8@1
		if (board[2][2] == '*' && board[0][2] == '#')
		{
			if (board[0][1] == '*')
			{
				board[2][0] = '#';
			}
			else
			{
				board[0][1] = '#';
			}
		}
	}
	if (CountNum(board, ROW, COL) == 6)
	{
		// 1@1@1
		if (board[0][0] == '#' && board[2][0] == '#' && board[2][2] == '#' && board[0][1] == '*' && board[1][0] == '*')
		{
			if (board[1][1] == ' ')
			{
				board[1][1] = '#';
			}
			else
			{
				board[1][1] = '#';
			}
		}
		// 2@1@1
		if (board[0][0] == '#' && board[0][2] == '#' && board[2][2] == '#' && board[0][1] == '*' && board[1][0] == '*')
		{
			if (board[1][1] == ' ')
			{
				board[1][1] = '#';
			}
			else
			{
				board[1][1] = '#';
			}
		}
		// 3@1@1
		if (board[0][0] == '#' && board[2][0] == '#' && board[2][2] == '#' && board[0][2] == '*' && board[1][1] == '*')
		{
			if (board[1][0] == ' ')
			{
				board[1][0] = '#';
			}
			else
			{
				board[2][1] = '#';
			}
		}
		// 4@1@1
		if (board[0][0] == '#' && board[0][2] == '#' && board[2][2] == '#' && board[2][0] == '*' && board[1][1] == '*')
		{
			if (board[0][1] == ' ')
			{
				board[0][1] = '#';
			}
			else
			{
				board[1][2] = '#';
			}
		}
		// 5@1@1
		if (board[0][0] == '#' && board[2][0] == '#' && board[0][2] == '#' && board[1][0] == '*' && board[2][1] == '*')
		{
			if (board[0][1] == ' ')
			{
				board[0][1] = '#';
			}
			else
			{
				board[1][1] = '#';
			}
		}
		// 6@1@1
		if (board[0][0] == '#' && board[0][2] == '#' && board[2][0] == '#' && board[0][1] == '*' && board[1][2] == '*')
		{
			if (board[1][0] == ' ')
			{
				board[1][0] = '#';
			}
			else
			{
				board[1][1] = '#';
			}
		}
		// 7@1@1
		if (board[0][0] == '#' && board[0][1] == '#' && board[2][0] == '#' && board[1][1] == '*' && board[0][2] == '*')
		{
			if (board[1][0] == '*')
			{
				board[1][2] = '#';
			}
			else
			{
				board[1][0] = '#';
			}
		}
		// 8@1@1
		if (board[0][0] == '#' && board[0][2] == '#' && board[2][0] == '#' && board[0][1] == '*' && board[2][2] == '*')
		{
			if (board[1][0] == ' ')
			{
				board[1][0] = '#';
			}
			else
			{
				board[1][1] = '#';
			}
		}
	}
	if (CountNum(board, ROW, COL) == 8)
	{
		//7@1@1@1
		if (board[0][0] == '#' && board[0][1] == '#' && board[1][2] == '#' && board[2][0] == '#' && board[0][2] == '*' && board[1][0] == '*' && board[1][1] == '*')
		{
			if (board[2][1] == '*')
			{
				board[2][2] = '#';
			}
			else
			{
				board[2][1] = '#';
			}
		}
	}
}

int JudgeFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char JugdeWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
	{
		return board[0][2];
	}
	if (JudgeFull(board, ROW, COL) == 1)
	{
		return 'L';
	}
	else
	{
		return 'C';
	}
}