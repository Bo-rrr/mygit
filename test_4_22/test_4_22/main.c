//
//  main.c
//  test_4_22
//
//  Created by hh on 2020/4/22.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <ctype.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}
//#define SwapInitbit(n) (( (n) & 0x55555555 << 1) | ((n) & 0xaaaaaaaa >> 1))
//void main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    printf("%d ", a);
//    b = SwapInitbit(a);
//    printf("%d ", b);
//}

//#define EXCHANGE(n)  (((n)&0x55555555)<<1)|(((n)&0xaaaaaaaa)>>1)
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d", &n);
//    printf("交换前:%d\n", n);
//    m = EXCHANGE(n);
//    printf("交换后:%d\n", m);
//
//    return 0;
//}


//#define offsetof(SturctType, MemberName) (size_t) & (SturctType -> MenmberName)

//enum State
//{
//    VALID,
//    INVALID
//};
//enum State state = INVALID;
//
//int my_atoi(char *str)
//{
//    int flag = 1;
//    long long ret = 0;
//    assert(str);
//    state = INVALID;
//    while(isspace(*str))
//    {
//        str++;
//    }
//    if(*str == '\0')
//    {
//        return 0;
//    }
//    if(*str == '+')
//    {
//        str++;
//    }
//    if(*str == '-')
//    {
//        flag = -1;
//        str++;
//    }
//    while(isdight(*str))
//    {
//        ret = ret * 10 + flag * (*str - '0');
//        if((ret > INT_MAX) || (ret < INT_MAX))
//        {
//            return 0;
//        }
//        str++;
//    }
//    if(*str == '0')
//    {
//        state = VALID;
//        return(int)ret;
//    }
//    else
//    {
//        return(int)ret;
//    }
//}

//void main()
//{
//    char *p = "1234hjk0987";
//    if(state == VALID)
//    printf("%d\n ", my_atoi(p));
//
//}

//char* mystrncat(char* dst, const char* src, size_t n)
//{
//    assert(NULL != dst && NULL != src);
//    char* tmp = dst;
//    while(*dst)
//    {
//        dst++;
//    }
//    int i = 0;
//    for(i = 0; src[i] && i < n; i++)
//    {
//        dst[i] = src[i];
//    }
//    dst[i] = 0;
//    return tmp;
//}
//
//void main()
//{
//    char str1[] = "asdfghjkl";
//    char str2[] = "qwertyui";
//    printf("%s\n", mystrncat(str1, str2, 6));
//
//}

//char* mystrncpy(char* dst, const char* src, size_t n)
//{
//    assert(NULL != dst && NULL != src);
//    int i = 0;
//    for(i = 0; src[i] && i < n; i++)
//    {
//        dst[i] = src[i];
//    }
//    if(i < n)
//    {
//        dst[i] = 0;
//    }
//    return dst;
//}
//void main()
//{
//    char str1[] = "asdfgh";
//    char str2[] = "zxcvbn";
//    printf("%s\n", mystrncpy(str1, str2, 5));
//}

void findTwoNum(int arr[], int sz, int num1, int num2)
{
    int i = 0;
    int sum = 0;
    for(i = 0; i < 9; i++)
    {
        sum ^= arr[i];
    }
    int pos = 0;
    for(i = 0; i < 32; i++)
    {
        if(sum & 1 << i)
        {
            pos = i;
            break;
        }
    }
    num1 = num2 = 0;
    for(i = 0; i < 10 ; i++)
    {
       if(arr[i] & 1 << pos)
       {
           num1 ^= arr[i];
       }
       else
       {
           num2 ^= arr[i];
       }
    }
}

void main()
{
    int arr[] = {1, 2, 4, 5, 7, 8, 9, 10 ,4, 1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int num1 = 0;
    int num2 = 0;
    findTwoNum(arr, sz, &num1, &num2);
    printf("num1 = %d,num2 = %d\n", num1, num2);
}
