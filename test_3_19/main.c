//
//  main.c
//  test_3_19
//
//  Created by YAN on 2020/3/19.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

#include<stdio.h>
int main()
{
int a, b, c, t;
scanf("%d%d%d", &a, &b, &c);
if ( a < b )
{
   t = a;
   a = b;
   b = t;
}
if (a < c )
{
   t = a;
   a = c;
   c = t;
}
if (  b < c )
{
   t = a;
   b = c;
   c = t;
}
printf("%d%d%d ", a, b, c);
return 0;
}
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 100 ; i++)
//    {
//        if (i % 3 == 0)
//            printf ("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//    int year = 0;
//    for(year = 1000; year <= 2000; year++)
//    {
//        if ( ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//            printf("%d ",year);
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    int n = 0;
//    if (n > b)
//        n = b;
//    int i = 0;
//    for ( i = n; i >= 1; i-- )
//    {
//        if ( (a % i == 0) && (b % i == 0))
//            printf("%d ",i);
//        break;
//    }
//    return 0;
//}
