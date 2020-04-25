//
//  main.c
//  test_4_25
//
//  Created by hh on 2020/4/25.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include <string.h>
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

//int fun(int a, int b)
//{
//    int max = (a >= b ? a : b);
//    int min = (a < b ? a : b);
//    int i  = 0;
//    for(i = 1; ; ++i)
//    {
//        if((max * i) % min == 0)
//        {
//            return (max * i);
//        }
//    }
//}
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//
//    int ret = fun(a,b);
//    printf("%d\n", ret);
//    return 0;
//}

int main()
{
    char str[1000] = {0};
    gets(str);
    int len = strlen(str);
    int tmp = 0;
    for(int i = 0; i < len / 2; ++i)
    {
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }
    printf("%s", str);
    return 0;
}
