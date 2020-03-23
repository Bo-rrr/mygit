//
//  main.c
//  test_3_23
//
//  Created by YAN on 2020/3/23.
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
//    int i = 0;
//    int n = 0;
//    int sum = 1;
//    scanf ("%d ", &n);
//        for (i = 1; i <= n; i++)
//        {
//            sum = i * sum;
//        }
//    printf ("%d! = %d", sum);
//
//    return 0;
//}
#include <stdio.h>
int main()
{
    int i,n;
    double sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum*i;
    printf("%d!=%lf",n,sum);
    printf("\n");
    return 0;
}
