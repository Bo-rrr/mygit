//
//  main.c
//  test_3_26
//
//  Created by YAN on 2020/3/26.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

//int Fac(int n)
//{
//    if (n <= 1)
//    return 1;
//    else
//    return n * Fac(n - 1);
//}
//
//int main()
//{
//    int n = 0;
//    scanf ("%d", &n);
//    int ret = Fac(n);
//    printf ("%d ", ret);
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int ret = 1;
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//    }
//    printf("%d ", ret);
//    return 0;
//}
//int my_strlen(char * str)
//{
//    if (* str != '\0')
//        return 1 + my_strlen (str + 1);
//    else
//        return 0;
//}
//
//int main()
//{
//    char arr[] = "hello";
//    int len = my_strlen (arr);
//    printf("%d ", len);
//
//    return 0;
//}

//int main()
//{
//    char arr[] = "hello";
//
//    return 0;
//}
//int Digitsum(int n)
//{
//    if (n <= 9)
//    {
//        return n;
//    }
//    else
//    {
//        return n % 10 + Digitsum (n / 10);
//    }
//
//}
//int main()
//{
//    int n = 0;
//    printf("请输入一个数:> ");
//    scanf("%d",&n);
//    printf("%d ", Digitsum(n));
//
//    return 0;
//}
//int my_pow(int n, int k)
//{
//    if (k > 0)
//        return my_pow(n, k - 1) * n;
//    else
//        return 1;
//}
//int main()
//{
//    int n = 0;
//    printf("请输入一个数:> ");
//    scanf ("%d",&n);
//    int k = 0;
//    printf("请输入要查找的次方:> ");
//    scanf("%d",&k);
//    int m = my_pow(n, k);
//    printf("%d\n ", m);
//
//    return 0;
//}
//int Fib (int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//
//    while(n > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//
//}
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int m = Fib(n);
//    printf ("%d ", m);
//
//    return 0;
//}

//int Fib(int n)
//{
//    if(n <= 2)
//        return 1;
//    else
//        return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int m = Fib(n);
//    printf("%d ", m);
//
//    return 0;
//}
//int reverse(char *str)
//{
//    if (str == NULL)     //判断传进来的是否是一个空的支付串
//        {
//            return -1;
//        }
//        if (*str == '\0')//判断是否到达字符串的结尾
//        {
//            return 0;
//        }
//        reverse_str(str + 1);//递归
//}
//
//int main()
//{
//    char a[] = "abcdefg";
//    reverse(a);
//    printf("%s\n ", a);
//
//    return 0;
//
//}


//void reverse_string(char * str)
//{
//    if(* str == '\0')
//    {
//        return ;
//    }
//    reverse_string(str + 1);
//    printf("%c", * str);
//}
//int main()
//{
//    const char *str="abcdef1234";
//    reverse_string(str);
//    printf("\n");
//
//    return 0;
//}
//long long Fac(int n)
//{
//    long long ret = 1;
//    for(int i = 2; i <= n; ++i)
//    {
//        ret *= n;
//    }
//
//    return ret;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    long long ret = Fac(n);
//    printf ("%lld ", ret);
//
//    return 0;
//}
//long long Fac(int n)
//{
//    if (n <= 1)
//    return 1;
//    else
//    return n * Fac(n - 1);
//}
//
//int main()
//{
//    int n = 0;
//    scanf ("%d", &n);
//    long long ret = Fac(n);
//    printf ("%lld ", ret);
//
//    return 0;
//}
int Fac(int n)
{
    int ret = 1;
    while(n > 0)
    {
        ret *= n;
        n--;
    }
    return ret;
}
int main()
{
    int n = 0;
    scanf ("%d", &n);
    int ret = Fac(n);
    printf ("%d ", ret);

    return 0;
}
