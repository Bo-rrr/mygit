//
//  main.c
//  test_3_18
//
//  Created by YAN on 2020/3/18.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}
//int main()
//{
//char a,b;
//a='a';
//b='b';
//a=a-32;
//b=b-32;
//printf("%c,%c\n%d,%d\n",a,b,a,b);
//}
//int main()
//{
//    int a=88,b=89;
//    printf("%d %d\n",a,b);
//    printf("%d,%d\n",a,b);
//    printf("%c,%c\n",a,b);
//    printf("a=%d,b=%d",a,b);
//
//}
//int main()
//{
//    int a=15;
//    float b=123.1234567;
//    double c=12345678.1234567;
//    char d='p';
//    printf("a=%d,%5d,%o,%x\n",a,a,a,a);
//    printf("b=%f,%lf,%5.4lf,%e\n",b,b,b,b);
//    printf("c=%lf,%f,%8.4lf\n",c,c,c);
//    printf("d=%c,%8c\n",d,d);
//}
//int main()
//{
//    int i = 0;
//    for(i = 1;i <= 100; i++)
//    {
//        if(i % 2 == 1)
//            printf("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while( i <= 100)
//    {
//        if (i % 2 == 1)
//            printf(" %d ", i);
//        i++;
//    }
//}
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//        case 1:
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("weekday\n");
//            break;
//        case 6:
//        case 7:
//            printf("weekend\n");
//            break;
//        default:
//            printf("bug\n");
//            break;
//    }
//    return 0;
//}
int main()
{
    int i = 0;
    while (i<10)
    {
        if (i == 5)
            continue;
        //while循环h中的contiune 跳过本次循环后面的代码c，直接去判断部分，进行下一次循环中的入口判断
        printf("%d ", i);
        i++;
    }
    

    return 0;
}
