//
//  main.c
//  test_4_27
//
//  Created by hh on 2020/4/27.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}


int main()
{
    int x = 0;
    scanf("%d", &x);
    int ret = 0;
    int digit = 0;
    while (x > 0)
    {
        digit = x % 10;
        ret = ret * 10 + digit;//原来的结果向左移一位，再加上新的digit
        x /= 10;
    }
    printf("%d\n", ret);
    
    return 0;
}
