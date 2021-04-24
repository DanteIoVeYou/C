#pragma once

#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void InitializeBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char JugdeWin(char board[ROW][COL], int row, int col);



