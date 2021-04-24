#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	//A flag to judge the status of game
	//We have 4 situations
	// Player win --- '*'
	// Computer win ---'#'
	// Lie ---'L'
	// Continue to do --- 'C' 
	char flag = 0;
	//Set a Board
	char board[ROW][COL] = { 0 };
	// Initialize board
	InitializeBoard(board, ROW, COL);

	//Display borad
	DisplayBoard(board, ROW, COL);
	printf("\n\n");
	while (1)
	{
		//PlayerMove(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		flag = JugdeWin(board, ROW, COL);
		if (flag == '#')
		{
			printf("You are lost! Ahhhhhhhhh Stupid!!!!!!!\n");
			break;
		}
		else if (flag == 'L')
		{
			printf("You are resulting in a draw!!!\n");
			break;
		}
		printf("=============================\n");
		PlayerMove(board, ROW, COL);
		//ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		flag = JugdeWin(board, ROW, COL);
		if (flag == '*')
		{
			printf("You win!\n");
			break;
		}
		else if (flag == 'L')
		{
			printf("Oh the battle lies!!!");
			break;
		}
		printf("=============================\n");
	}
	printf("Waiting......");
	Sleep(5000);
	system("cls");
}
void meau()
{
	printf("=============================\n");
	printf("======    1.play       ======\n");
	printf("======    0.exit       ======\n");
	printf("=============================\n");
	printf("=====Copyright:DanteKing=====\n");
	printf("=============================\n");

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
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
			printf("Wrong input.Choose again!\n");
			break;
		}
	} while (input);
	return 0;
}