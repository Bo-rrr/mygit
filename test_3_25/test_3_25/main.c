//
//  main.c
//  test_3_25
//
//  Created by YAN on 2020/3/25.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include <math.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}
//int is_prime(int n)
//{
//    int j = 0;
//    for(j = 2; j <= sqrt(n); j++)
//    {
//        if (n % j == 0)
//        return 0;
//    }
//     return 1;
//}
//
//int main()
//{
//    int i = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (is_prime(i == 1))
//        {
//            printf("%d ", i);
//        }
//    }
//
//    return 0;
//}
//int is_leap_year(int y)
//{
//    return ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
//}
//
//int main()
//{
//    int year = 0;
//    printf("请输入要查找的年份:> ");
//    scanf("%d",&year);
//    if (is_leap_year(year) == 1 )
//    {
//        printf("%d是闰年\n " ,year);
//    }
//    else{
//        printf("%d不是润年\n " ,year);
//    }
//}
//void Swap (int *pa, int *pb)
//{
//    int t = 0;
//    t = *pa;
//    *pa = *pb;
//    *pb = t;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("请输入要交换的两个数字:> ");
//    scanf("%d%d",&a,&b);
//    Swap (&a, &b);
//    printf("%d %d\n " ,a, b);
//
//    return 0;
//}
//void print(int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= n ;i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d * %d = %-2d\t ", i, j, i * j);
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int n = 0;
//    printf("请输入行数:> ");
//    scanf("%d",&n);
//    print(n);
//
//    return 0;
//}
//void ADD (int *p)
//{
//    (*p)++;
//}
//
//int main()
//{
//    int num = 0;
//    ADD (&num);
//    printf("%d ", num);
//
//    return 0;
//}
int binary_search (int arr[], int k, int sz)
{
    int left = 0;
    int right = sz - 1;
    
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > k)
        {
            right = mid -1;
        }
        else if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sz = sizeof (arr) / sizeof (arr[0]);
    int k = 0;
    
    scanf("%d", &k);
    int ret = binary_search (arr, k, sz);
    if (ret == -1)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了，下标是: %d\n ", ret);
    }
    
    return 0;
}
