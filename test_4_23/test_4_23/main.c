//
//  main.c
//  test_4_23
//
//  Created by hh on 2020/4/23.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

#define SWAP(X) ((((X)&0x55555555)<<1)|(((X)&0xaaaaaaaa)>>1))
 
int main()
{
    int n = 0;
    int ret = 0;
    printf("请输入一个数>");
    scanf("%d",&n);
    ret = SWAP(n);
    printf("%d交换后为：%d\n",n, ret);
    
    return 0;
}
