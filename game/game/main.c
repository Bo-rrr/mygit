//
//  main.c
//  game
//
//  Created by YAN on 2020/3/28.
//  Copyright © 2020 Yeee. All rights reserved.
//

//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}
#include "Header.h"

void InitBoard(char Board[ROWS][COLS], int rows, int cols, int set)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            board[i][j] = set;
        }
    }
}

void DisplayBoard(char mine[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    for(i = 0; i <= col; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}
for(i = 0; i <= row; i++)
{
    printf("%d ", i);
    for(j = 1; j <= col; j++)
    {
        printf("%c ", board[i][j]);
    }
    printf("\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
    int count = EASY_COUNT;
    while(count)
    {
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if(mine[x][y] = '0')
        {
            mine[x][y] = '1';
            count--;
        }
    }
}

void GetMIneCount(char mine[ROWS][COLS], int x, int y)
{
    return (mine[x - 1][y] +
           mine[x - 1][y - 1] +
           mine[x][y - 1] +
           mine[x - 1][y - 1] +
           mine[x + 1][y] +
           mine[x + 1][y + 1] +
           mine[x][y + 1] +
            mine[x - 1][y + 1]- 8 * '0');
        
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
    {
        int x = 0;
        int y = 0;
        int win = 0;
        
        while(win < row * col - EASY_COUNT)
        {
            printf("请输入要排查的坐标:>");
            scanf("%d%d ", &x, &y);
            if(x >= 1 && x <= row && y >= 1 && y <= col)
            {
                if(mine[x][y] == '1')
                {
                    printf("很遗憾你被炸死了\n");
                    DispalyBoard(show, row, col);
                    break;
                    
                }
                else
                {
                    int count = GetMineCount(mine, x, y);
                    show[x][y] = count + '0';
                    DisPlayBoard(show, row, col);
                    win++;
                    
                }
            }
            else
            {
                printf("坐标有误，请重新输入\n");
            }
        }
        if(win = row * col -EASY_COUNT)
        {
            printf("恭喜你，排雷成功");
            DisPlayBoard(mine, row, col);
        }
    }
