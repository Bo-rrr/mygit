//
//  main.c
//  test_4_4
//
//  Created by YAN on 2020/4/4.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include <math.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

//int main()
//{
//    int money = 20;
//    int count = 0;//汽水总瓶数
//    int bottle = 0;//空瓶数
//    int bottle1 = 0;//空瓶数为奇数时的空瓶数
//
//    if(money > 0)
//    {
//        count = money;
//        bottle = money;
//    }
//
//    while(bottle != 1)
//    {
//        if(bottle % 2 == 0)
//        {
//            count += bottle / 2;
//            bottle += bottle / 2;
//        }
//        else
//        {
//            count += bottle / 2;
//            bottle1 = bottle % 2;
//            bottle = bottle / 2 + bottle1;
//        }
//    }
//    printf("%d\n ", count);
//
//    return 0;
//}


//int A(int n, int y)
//{
//    if(n==0)//汽水喝完，开始用空瓶子来换汽水
//    {
//        if(y <= 1)
//        {
//            return 0;
//        }
//        else
//        {
//            //计算多余出来瓶子的个数
//            int i = 0;
//            int j = 0;
//            while(y)//计算喝完之前多出来多少个空瓶
//            {
//                if(y%2 != 0)
//                    i++;
//                y = y/2;
//            }
//            j = i;
//            i= i/2;
//            return i+A(i/2, j);
//        }
//    }
//    else
//    {
//        return n+A(n/2,y);
//    }
//
//}
//int main()
//{
//    int money = 0;
//    int count = 0;
//    scanf("%d", &money);
//    count = A(money, money);
//
//    printf("%d\n", count);
//    return 0;
//}


//int main()
//{
//    int money = 0;
//    int total = 0;
//    int empty = 0;
//
//    scanf("%d", &money);
//
//    total = money;
//    empty = money;
//
//    while(empty > 1)
//    {
//        total += empty / 2;
//        empty = empty / 2 + empty % 2;
//    }
//    printf("%d\n ", total);
//
//    return 0;
//}


//int main()
//{
//    char arr[] = { 1, 2, 3, 4, 5 };
//    char* pa = arr;
//
//    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", (*pa + i) );
//
//    }
//
//    return 0;
//}


//int main()
//{
//    int a= 0;
//    int n = 0;
//    int sum = 0;
//    int i = 0;
//    int tmp =0;
//
//    scanf("%d%d", &a, &n);
//    for(i = 0; i < n; i++)
//    {
//        tmp = tmp * 10 + a;
//        sum += tmp;
//    }
//    printf("%d ", sum);
//
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int sum = 0;
//    int tmp = 0;
//    int n = 0;
//
//    scanf("%d%d", &a, &n);
//    for(int i = 0; i < n; i++)
//    {
//        tmp = tmp * 10 + a;
//        sum += tmp;
//    }
//    printf("%d\n ", sum);
//    return 0;
//}


int main()
{
    for(int i = 0; i < 100000; i++)
    {
        int count = 0;
        int tmp = 0;
        int sum = 0;

        while(tmp / 10)
        {
            count++;
            tmp /= 10;
        }
        tmp = i;
        while(tmp)
        {
            sum += pow(tmp % 10, count);
            tmp /= 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }

    }

    return 0;
}
