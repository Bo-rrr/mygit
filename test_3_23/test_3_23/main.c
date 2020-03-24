//
//  main.c
//  test_3_23
//
//  Created by YAN on 2020/3/23.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}
//计算n的阶乘
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 1;
//    int ret = 1;
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//    }
//    printf("%d! = %d", ret);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    int i = 1;
//    int sum = 0;
//    int ret = 1;
//
//    for (n = 1; n <= 3 ; n++)
//    {
//        ret = 1;
//        for (i = 1; i <= n; i++)
//        {
//            ret = ret * i;
//        }
//        sum = sum + ret;
//    }
//
//    printf("%d\n", sum);
//
//    return 0;
//}
int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int k = 7;
    int sz = sizeof (arr) / sizeof (arr[0]);//计算元素个数
    int i = 0;
    for (i = 1; i < sz; i++)
    {
        if (arr[i] == k)
        {
            printf("找到了 ，下标是: %d\n", i);
        break;
        }
    }
        if (i == sz)
        {
        printf("找不到\n")；
        }
    
    return 0;
}
