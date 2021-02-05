/*
You can modify the Constant ROW and COL to change the size of chessdoard .
You can modify it with the size of "m * n".(m>2,n>2)
Copyright : Dante King 2021.2.5
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void meau();
void initboard(char arr[ROW][COL], int row, int col);
void Display_Board(char arr[ROW][COL],int row, int col);
void Player_Move(char arr[ROW][COL], int row, int col);
void Computer_Move(char arr[ROW][COL], int row, int col);
char Judge(char arr[ROW][COL], int row, int col);


//Main function.
int main()
{
	prompt();
	return 0;
}


//Algorithm of game
void game()
{
	char arr[ROW][COL] = { 0 };//define an array
	initboard(arr, ROW, COL);//initialize a chessboard
	Display_Board(arr,ROW, COL);//dispaly the chessboard
		while(1)
		{
			char result = 0;
			Player_Move(arr, ROW, COL);
			Display_Board(arr, ROW, COL);
			result = Judge(arr, ROW, COL);
			if (result == '*')
			{
				printf("You win!\n");
					break;
			}
			if (result == 'T')
			{
				printf("You two tie!\n");
					break;
			}
			Computer_Move(arr, ROW, COL);
			printf("Here is the situation\n");
			Display_Board(arr, ROW, COL);
			result = Judge(arr, ROW, COL);
			if (result == '#')
			{
				printf("You lost!\n");
					break;
			}
			if (result == 'T')
			{
				printf("You two tie!\n");
					break;
			}
		}
	}


//Player's choice and interaction.
void prompt()
{
	int choose;
	
	do
	{
		meau();
		scanf("%d", &choose);
		switch (choose)
		{
		case(1):
		{
			printf("Start!\n");
			game();
			break;
		}
		case(0):
		{
			printf("Exit!\n");
			break;
		}
		default:
		{
			printf("Please choose again!\n");
			break;
		}
		}
	} while (choose);
}


//Create a game meau.
void meau()
{
	printf("Welcome to Tic-Tac-Toe!\n\n");
	printf("=============================\n\n");
	printf("1.start\n\n");
	printf("0.exit\n\n");
	printf("=============================\n");
	printf("Copyright:DanteKing\n");
	printf("=============================\n");
}


//Initialize the chessboard.
/*
   |   |   
---|---|---
   |   |
---|---|---
   |   |
*/
void initboard(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ' ;
		}
	}
}


//Display the chessboard.
void Display_Board(char arr[ROW][COL],int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if(j<col-1) printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1) printf("|");
			}
		}
		printf("\n");
	}
}


//Realize the player's operation.
void Player_Move(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while(1) 
	{
		printf("Please enter coordinate:>");
		scanf("%d%d", &x, &y);
		if (arr[x - 1][y - 1] == ' ' && x > 0 && y > 0 && x  <=row && y <=col)
		{
			arr[x - 1][y - 1] = '*';
			break;
		}
		else
			printf("Your input is illegal.Please input again!\n");
	}
}

//Realize computer's operation.
void Computer_Move(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		srand((unsigned)time(NULL));
		x = (rand()) % 3;
		y = (rand()) % 3;
		if (arr[x][y] == ' ' && arr[x][y] != '*' && x >= 0 && y >= 0 && x < row && y < col)
		{
			arr[x][y] = '#';
			break;
		}
	}
}


//Do the judgement.
//There are 4 situations.
/*
1.Player won --> result=='*'
2.Computer won --> result=='#'
3.Tie --> result=='T'
4.Continue --? result=='C'

*/
char Judge(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	char result = 0;
	//Judge if you tie first.
	int jud = 1;
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				jud = 0;
				break;
			}
		}
		if (jud == 0)
		{
			break;
		}
	}
	if (jud == 1) result = 'T';
	//Judge if you win.
	for (i = 1; i < row - 1; i++)
	{
		for (j = 1; j < col - 1; j++)
		{
			if ((arr[i][j] == '*' && arr[i - 1][j - 1] == '*' && arr[i + 1][j + 1] == '*') | (arr[i][j] == '*' && arr[i - 1][j + 1] == '*' && arr[i + 1][j - 1] == '*') | (arr[i][j] == '*' && arr[i][j - 1] == '*' && arr[i][j + 1] == '*') | (arr[i][j] == '*' && arr[i - 1][j] == '*' && arr[i + 1][j] == '*'))
				result = arr[i][j];
		}
	}
	for (i = 1; i < col - 1; i++)
	{
		if (arr[0][i - 1] == '*' && arr[0][i] == '*' && arr[0][i + 1] == '*')
			result = arr[0][i];
	}
	for (i = 1; i < col - 1; i++)
	{
		if (arr[row-1][i - 1] == '*' && arr[row-1][i] == '*' && arr[row-1][i + 1] == '*')
			result = arr[row-1][i];
	}
	for (i = 1; i < row - 1; i++)
	{
		if (arr[i-1][0] == '*' && arr[i][0] == '*' && arr[i+1][0] == '*')
			result = arr[i][0];
	}
	for (i = 1; i < row - 1; i++)
	{
		if (arr[i - 1][col-1] == '*' && arr[i][col-1] == '*' && arr[i + 1][col-1] == '*')
			result = arr[i][col-1];
	}
	//Judge if computer win.
	for (i = 1; i < row - 1; i++)
	{
		for (j = 1; j < col - 1; j++)
		{
			if ((arr[i][j] == '#' && arr[i - 1][j - 1] == '#' && arr[i + 1][j + 1] == '#') | (arr[i][j] == '#' && arr[i - 1][j + 1] == '#' && arr[i + 1][j - 1] == '#') | (arr[i][j] == '#' && arr[i][j - 1] == '#' && arr[i][j + 1] == '#') | (arr[i][j] == '#' && arr[i - 1][j] == '#' && arr[i + 1][j] == '#'))
				result = arr[i][j];
		}
	}
	for (i = 1; i < col - 1; i++)
	{
		if (arr[0][i - 1] == '#' && arr[0][i] == '#' && arr[0][i + 1] == '#')
			result = arr[0][i];
	}
	for (i = 1; i < col - 1; i++)
	{
		if (arr[row - 1][i - 1] == '#' && arr[row - 1][i] == '#' && arr[row - 1][i + 1] == '#')
			result = arr[row - 1][i];
	}
	for (i = 1; i < row - 1; i++)
	{
		if (arr[i - 1][0] == '#' && arr[i][0] == '#' && arr[i + 1][0] == '#')
			result = arr[i][0];
	}
	for (i = 1; i < row - 1; i++)
	{
		if (arr[i - 1][col - 1] == '#' && arr[i][col - 1] == '#' && arr[i + 1][col - 1] == '#')
			result = arr[i][col - 1];
	}
	//Continue chess.
	if (result == 0) result = 'C';
	return result;
}
