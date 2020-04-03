//
//  test.c
//  game
//
//  Created by YAN on 2020/3/28.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include "Header.h"

void meun()
{
    printf("****************************");
    printf("*****      1. paly    ******");
    printf("*****      0. exit    ******");
    printf("****************************");
}

void game()
{
    char Mine[ROWS][COLS] = { 0 };
    char show[ROWS][COLS] = { 0 };
    
    InitBoard(Mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');
    
    SetMine(Mine, ROW, COL);
    FindMIne(Mine, show, ROW, COL);
    
}

void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d ", &input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误\n");
                break;
        }
        while(input);
    }
    
int main()
    {
        test();
        
        return 0;
    }
    
}
