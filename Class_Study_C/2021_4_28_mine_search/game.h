#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE 80
void SetMine(char mine[ROWS][COLS], int row, int cow);
void DisPlay(char board[ROWS][COLS], int row, int col);
void InitBoard(char board[ROWS][COLS], int row, int col, char ch);
void SearchMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
