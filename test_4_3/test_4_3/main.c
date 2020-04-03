//
//  main.c
//  test_4_3
//
//  Created by YAN on 2020/4/3.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//
//    int i = 0;
//    for(i = 0; i < 10; i++)
//    {
//        printf("%d ", *(p + i) );
//    }
//
//    return 0;
//}


//void PrintLine(int blank_count, int start_count)
//{
//    int i = 0;
//    for (i = 0; i < blank_count; i++)
//    {
//        printf(" ");
//    }
//    for (i = 0; i < start_count; i++)
//    {
//        printf("*");
//    }
//    printf("\n");
//}
//
//void  PrintLingxing(int n)
//{
//    int i = 1;
//    for (i = 1; i < n; i++)
//    {
//        PrintLine(n - i, 2 * i - 1);
//    }
//    PrintLine(0, 2 * n - 1);
//    for (i = n - 1; i > 0; i--)
//    {
//        PrintLine(n - i, 2 * i - 1);
//    }
//}
//
//int main()
//{
//    PrintLingxing(7);
//    return 0;
//}

//void Reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while(left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        ++left;
//        --right;
//    }
//}
//
//int main()
//{
//    char str[] = "hello bit";
//    Reverse(str);
//
//    return 0;
//}

//int main()
//{
//    char str[101] = { 0 };
//    while(gets(str))
//    {
//        Reverse(str);
//        printf("%s\n ", str);
//        memst(str, 0, sizeof(str) / sizeof(str[0]));
//    }
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

//int main()
//{
//    for(int i = 0; i < 100000; i++)
//    {
//        int count = 0;
//        int tmp = 0;
//        int sum = 0;
//
//        while(tmp / 10)
//        {
//            count++;
//            tmp /= 10;
//        }
//        tmp = i;
//        while(tmp)
//        {
//            sum += pow(tmp % 10, count);
//            tmp /= 10;
//        }
//
//        if(sum == i)
//        {
//            printf("%d ", i);
//        }
//
//    }
//
//    return 0;
//}

//int main()
//{
//    int line = 0;
//    int i = 0;
//    scanf("%d", &line);
//
//    for(i = 0; i < line; i++)
//    {
//        int j = 0;
//        for(j = 0; j < line - 1 - i; j++)
//        {
//            printf(" ");
//        }
//
//        for(j = 0; j < 2 * i + 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    for(i = 0; i < line - 1; i++)
//    {
//        int j = 0;
//        for(j = 0; j < 2 * (line - 1 - i) - 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//void Reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//
//    while(left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        ++left;
//        --right;
//    }
//}
//
//int main()
//{
//    char* str = "hello bit";
//    Reverse(str);
//
//    return 0;
//}
