//
//  main.c
//  test_4_26
//
//  Created by hh on 2020/4/26.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>


#include<string.h>


//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}


int main()

　{

　　char src[] = "******************************";

　　char dest[] = "abcdefghijlkmnopqrstuvwxyz0123as6";

　　printf("destinationbefore memcpy: %s\n", dest);

　　memcpy(dest,src, strlen(src));

　　printf("destinationafter memcpy: %s\n", dest);

　　return 0;

　}
