#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//声明函数
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL],int rwo,int col);


//IsWin()函数判断四种状态
//玩家赢-----返回'*'
//电脑赢-----返回'#'
//平局-------返回'Q'
//继续-------返回'C'