//
//  main.c
//  ffffff
//
//  Created by YAN on 2020/3/21.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
//int main()
//{
//    int a = 0, b = 0;
//    for (a = 1, b = 1; a <= 100; a++)
//    {
//        if (b >= 20) break;
//        if (b % 3 == 1)
//        {
//            b = b + 3;
//            continue;
//        }
//        b = b-5;
//    }
//    printf("%d\n", a);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        while (i)
//        {
//            if (i % 10 == 9)
//            count++;
//        }
//        if (i == i / 10)
//            count++;
//    }
//    printf("count = %d ", count);
//    return 0;
//}
//int main()
//{
//    int a = 1;
//    float sum = 0.0;
//    for (int i = 1; i <= 100; i++)
//    {
//        sum += (1.0 * a) / i;
//        a = -a;
//    }
//    printf("%f ",sum);
//    return 0;
//}
//int main()
//{
//    int arr[10];
//    int max = 0;
//    int i = 0;
//    printf("输入十个整数 ：\n");
//    for (i = 0; i < 10; i++)
//    {
//        scanf ("%d" ,&arr[i]);
//    }
//    for (i = 0; i < 10; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    printf ("十个数中最大数=%d\n" , max);
//}
int main()
{
    int i = 0;
    int j = 0;
    for (j = 1; j < 10 ; j++)
    {
        for( i = 1; i < 10 ; i++)
        {
            printf("%d * %d = %d\t", i , j ,i * j);
            if (i == j)
                printf ("\n");
        }
    }
    return 0;
}
