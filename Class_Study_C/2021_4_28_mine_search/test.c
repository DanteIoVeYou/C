#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	//1---mine
	//0---none-mine
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//Initialize the board
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//set mines 
	SetMine(mine, ROW, COL);
	DisPlay(mine, ROW, COL);
	SearchMine(mine, show, ROW, COL);
}
void meau()
{
	printf("==============================\n");
	printf("=======     1.play      ======\n");
	printf("=======     0.exit      ======\n");
	printf("==============================\n");
}
int main()
{
	int input = 1;
	do {
		meau();
		printf("Please choose:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Exit!\n");
			break;
		default:
			printf("Illegal input.Please choose again!\n");
			break;
		}
	} while (input);
}