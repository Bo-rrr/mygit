//
//  main.c
//  test_4_8
//
//  Created by YAN on 2020/4/8.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

//void yanghuiTriangle(int n)
//{
//    int data[30] = { 1 };
//    int i = 0;
//    int j = 0;
//    printf("1\n");
//
//    for(i = 1; i < n; i++)
//    {
//        for(j = i; j > 0; j--)
//        {
//            data[j] += data[j - 1];
//
//        }
//    for(j = 0; j <= i; j++)
//    {
//        printf("%d ", data[j]);
//    }
//    putchar('\n');
//   }
//}

//int main()
//{
//    int n = 1;
//    yanghuiTriangle(n);
//
//    return 0;
//}

//void yangHuiTriangle(int n)
//{
//    int data[30] = { 1 };
//
//    int i, j;
//    printf("1\n"); //第一行就直接打印了
//    for (i = 1; i < n; i++) //从第二行开始
//    {
//        for (j = i; j > 0; j--) //从后向前填，避免上一行的数据在使用前就被覆盖
//        {
//            data[j] += data[j - 1]; //公式同上，由于变成了一维，公式也变简单了。
//        }
//
//        for (j = 0; j <= i; j++) //这一行填完就直接打印了。
//        {
//            printf("%d ", data[j]);
//        }
//        putchar('\n');
//    }
//}


//int main()
//{
//    int murder[4] = { 0 };
//    int i = 0;
//
//    for(i = 0; i < 4; i++)
//    {
//        murder[i] = 1;
//        if( (murder[0] != 1) +
//           (murder[1] == 1) +
//           (murder[2] == 1) +
//           (murder[3] != 1) == 3 )
//        {
//            break;
//        }
//        murder[i] = 0;
//    }
//    putchar('A' + i);
//
//    return 0;
//}


void swapArgs(int* a, int* b)
{
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void diveRank(int* p, int n)
{
    if(n >= 5)
    {
        if( (p[1] == 2) + (p[0] == 3) == 1 &&
           (p[1] == 2) + (p[4] == 4) == 1 &&
           (p[2] == 1) + (p[3] == 2) == 1 &&
              (p[2] == 5) + (p[3] == 3) == 1 &&
                 (p[4] == 5) + (p[0] == 1) == 1 )
        {
            for(int i = 0; i < 5; i++)
            {
                printf("%d", p[i]);
            }
        putchar('\n');
        }
        return;
    }
    
    int i = 0;
    for(i = n; i < 5; i++)
    {
        swapArgs(p + i, p + n);
        diveRank(p, n + 1);
        swapArgs(p + i, p + n);
    }
}

int main()
{
    int p[5] = { 1, 2, 3, 4, 5 };
    diveRank(p, 0);
    
    return 0;
}
