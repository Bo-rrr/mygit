//
//  main.c
//  test_3_23
//
//  Created by YAN on 2020/3/23.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
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
//int main()
//{
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int k = 0;
//    printf("你要找哪个数字: ");
//    scanf("%d", &k);
//    int sz = sizeof (arr) / sizeof (arr[0]);//计算元素个数
//    int i = 0;
//    for (i = 1; i < sz; i++)
//    {
//        if (arr[i] == k)
//        {
//            printf("找到了 ，下标是: %d\n", i);
//        break;
//        }
//    }
//        if (i == sz)
//        {
//            printf("找不到");
//        }
//
//    return 0;
//}
//int main()
//{
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int k = 0;
//    printf("请输入要查找的数字: ");
//    scanf("%d",&k);
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    int left = 0;
//    int right = sz -1;
//
//    while (left <= right)
//{
//    int mid = (left + right) / 2;
//    if (arr[mid] < k)
//    {
//        left = mid + 1;
//    }
//    else if (arr[mid] > k)
//    {
//        right = mid - 1;
//    }
//    else
//    {
//        printf("找到了， 下标是 :%d\n", mid);
//        break;
//    }
//}
//    if (left > right)
//    {
//        printf("找不到");
//    }
//    return 0;
//}
//int main()
//{
//    char arr1[] = "asdfghjkl";
//    char arr2[] = "#########";
//
//    int len = strlen(arr1);
//    int left = 0;
//    int right = len - 1;
//
//    while(left <= right)
//    {
//    arr2[left] = arr1[left];
//    arr2[right] = arr1[right];
//    printf ("%s\n", arr2);
//    left++;
//    right--;
//    }
//
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    char password[20] = { 0 };
//    for (i = 1; i <= 3; i++)
//    {
//        printf("请输入密码：>");
//        scanf("%s", password);
//        if (0== strcmp(password, "123456"))
//        {
//            printf("成功了\n ");
//                   break;
//        }
//        else
//        {
//            printf("密码错误\n");
//        }
//        if (i == 3)
//        {
//            printf("三次密码错误，退出程序\n");
//        }
//
//    }
//    return 0;
//}
//
//void menu()
//{
//    printf("**************************\n");
//    printf("*** 1. play   0. exit ***\n");
//    printf("**************************\n");
//}
//void game()
//{
//    int guess = 0;
//    int ret = rand() % 100 + 1;
//    while(1)
//    {
//        printf("请猜数字:>");
//        scanf("%d", &guess);
//        if (guess > ret)
//        {
//            printf("猜大了\n");
//        }
//        else if (guess < ret)
//        {
//            printf("猜小了\n");
//        }
//        else
//        {
//            printf("恭喜你，猜对了\n");
//            break;
//        }
//    }
//}
//
//int main()
//{
//    int input = 0;
//    srand((unsigned int)time(NULL));
//
// do
// {
//     menu();
//     printf ("请选择:> ");
//     scanf("%d",&input);
//     switch (input)
//     {
//         case 1:
//             game();
//             break;
//         case 0:
//             printf("exit");
//             break;
//         default:
//             printf("选项错误\n");
//             break;
//     }
// }
//    while(input);
//    return 0;
//}
int main()
{
    char arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sz = sizeof(arr) /sizeof(arr[0]);
    int k = 0;
    printf("请输入要查找的数字:>");
    scanf("%d",&k);
    
    int left = 0;
    int right = sz - 1;
    int mid = (left + right) / 2;
    
    while (left <= right)
    {
        if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else if(arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            printf("找到了，下标是:>%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("找不到");
    }
    return 0;
}
