
#define ROW 3
#define COL 3

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisPlayBoard(char board[ROW][COL], int row, int col);
void PlayerMOve(char board[ROW][COL], int row, int col);
void CompterMOve(char board[ROW][COL], int row, int col);

//电脑win返回‘#’
//玩家win 返回‘*’
//平局返回‘TW’
//继续返回‘C'
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);