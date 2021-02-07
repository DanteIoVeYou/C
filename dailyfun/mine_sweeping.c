#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9 
#define COL 9 
#define MINE 80 
#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char arr[ROWS][COLS], int row, int col, char set);
void SetMine(char arr[ROWS][COLS]);
void Display(char arr[ROWS][COLS], int row, int col);
int  Show_Num(char situ[ROWS][COLS],int x, int y);
void FindMine(char situ[ROWS][COLS],char show[ROWS][COLS]);

void game()
{
	char situ[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(situ, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	SetMine(situ);
	//Display(situ, ROW, COL);
	Display(show, ROW, COL);
	//Display(situ, ROW, COL);
	FindMine(situ,show);
}

void meau()
{
	int choose = 0;
	do
	{
		printf(" Welcome to DanteKing's Mine-Sweeping\n");
		printf("======================================\n");
		printf("============1.start===================\n");
		printf("============2.rule====================\n");
		printf("============0.exit====================\n");
		printf("======================================\n");
		printf("Please choose:>");
		scanf("%d", &choose);
		switch (choose)
		{
		case(1):
			printf("Go!\n");
			game();
			break;
		case(0):
			printf("Exit!\n");
			break;
		case(2):
			printf("1.Please input the coordinate of the lattice.\n");
			printf("2.If the coordinate is mine,you lost.\n");
			printf("3.Pick all the lattice without mines and you win.\n");
			break;
		default:
			printf("Inlegal input! Please choose again!\n");
			break;
		}
	} while (choose);
}
void start()
{
	meau();

}
int main()
{
	start();
	return 0;
}


//Initialize the board.
void InitBoard(char arr[ROWS][COLS], int row, int col, char set)
{
	int i = 1;
	int j = 1;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = set;
		}
	}
}

//Set MINE mines.
void SetMine(char arr[ROWS][COLS])
{
	srand((unsigned)time(NULL));
	int x = 0;
	int y = 0;
	int num = MINE;
	while (num)
	{
		x = (rand()) % ROW + 1;
		y = (rand()) % COL + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			num--;
		}
	}
}


//Display the board.
void Display(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{	
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


void FindMine(char situ[ROWS][COLS], char show[ROWS][COLS])
{
	int x = 0;
	int y = 0;
	int count = 0;
	//printf("count=%d\n",count);
	while (count< ROW * COL - MINE)
	{
		printf("Please enter coordinate:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && y >= 1 && x <= ROW && y <= COL)
		{
			if (situ[x][y] == '1')
			{
				printf("Bomb!Bomb!Bomb!hhhhhhhhhh!Defeated!\n\nStupid!\n");
				break;
			}
			else
			{
				int counts = Show_Num(situ, x, y);
				show[x][y] = counts + '0';
				Display(show, ROW, COL);
				count++;
			}
		}
		if (count == ROW * COL - MINE)
		{
			printf("Won!\nYou are as clever as the author of the game!\n");
			break;
		}
	}
}

//Show the number of mines around the coordinate.
int Show_Num(char situ[ROWS][COLS],int x,int y)
{
	return situ[x - 1][y - 1] +
		situ[x - 1][y] +
		situ[x - 1][y + 1] +
		situ[x][y - 1] +
		situ[x][y + 1] +
		situ[x + 1][y - 1] +
		situ[x + 1][y] +
		situ[x + 1][y + 1] -  8 * '0';
}
