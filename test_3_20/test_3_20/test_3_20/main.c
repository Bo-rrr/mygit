//
//  main.c
//  test_3_20
//
//  Created by YAN on 2020/3/20.
//  Copyright © 2020 Yeee. All rights reserved.
//


//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int t = 0;
//    scanf("%d%d" , &a, &b);
//    if (a < b)
//    {
//        t = a;
//        a = b;
//        b = t;
//    }
//    while(a % b != 0)
//        t =a % b;
//        a = b;
//        b = t;
//    printf("%d ",b);
//    return 0;
//}
#include <stdio.h>
//int main()
//{
//  int a = 0;
//  int b = 0;
//  int t = 0;
//  scanf("%d%d" , &a, &b);
//  if (a < b)
//  {
//    t = a;
//    a = b;
//    b = t;
//  }
//  while(a % b)
//{
//    t =a % b;
//    a = b;
//    b = t;
//}
//  printf("%d ",b);
//  return 0;
//}

//int main()
//{
//    int n =0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        n = n * i;
//    }
//    printf("%d\n", n);
//    return 0;
//}
int main()
{
    int n = 0;
    int i = 0;
    scanf("%d", &n);
    while (i <= n)
    {
        n = n * i;
        i++;
    }
    printf("%d", n);
}
