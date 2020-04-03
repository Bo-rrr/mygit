//
//  Header.h
//  game
//
//  Created by YAN on 2020/3/28.
//  Copyright © 2020 Yeee. All rights reserved.
//

//#ifndef Header_h
//#define Header_h
//
//
//#endif /* Header_h */
#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

#define EAST_COUNT 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DispalyBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

