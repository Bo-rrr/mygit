//
//  main.c
//  test_4_13
//
//  Created by hh on 2020/4/13.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include <assert.h>
#include <string.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

//void myqsort(void * base, size_t nitems, size_t size, int(*compar)(const void *, const void *))
//{
//    int i, j;
//    char * st = (char *)base; //void *不方便加减，用char *加减轻松且字节跳转为1，方便控制。
//    char tmp[16]; //考虑到long double类型，临时空间做成16字节比较保险
//
//    for (i = 0; i < nitems - 1; i++)
//    {
//        for (j = 0; j < nitems - 1 - i; j++) //冒泡常用循环头
//        {
//            if (compar(st + j * size, st + (j + 1) * size)) //比较的时候跳转注意乘size
//            {
//                memcpy(tmp, st + j * size, size); //交换操作用memcpy完成就不会出问题。
//                memcpy(st + j * size, st + (j + 1) * size, size);
//                memcpy(st + (j + 1) * size, tmp, size);
//            }
//        }
//    }
//}
//
//void bubble(int* arr, int sz, int )
//{
//
//}
//
//void main()
//{
//    int arr[] = {10, 9, 8, 7, 5, 2, 5, 8, 1};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble(arr);
//}


//int my_strlen(const char* str)
//{
//    assert(str != NULL);
//    int count = 0;
//
//    while(*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}


//int my_strlen(const char* str)
//{
//    assert(str != NULL);
//    if(*str == '\0')
//        return 0;
//    else
//        return 1 + my_strlen(str + 1);
//}

//int my_strlen(char* s)
//{
//    char* p = s;
//    while(*p != '\0')
//    {
//        p++;
//    }
//    return p - s;
//
//}


//char* my_strcpy(char* str1, const char* str2)
//{
//    assert(str1);
//    assert(str2);
//    if(str1 == NULL || str2 == NULL)
//        return NULL;
//
//    char* ret = str1;
//    while(*str1++ == *str2++)
//    {
//        ;
//    }
//        return ret;
//}

//int main()
//{
//    char str1[] = "afdjsfsfs";
//    char str2[] = "#######";
//    //int len = my_strlen(str);
//    //printf("%d\n", len);
//    my_strcpy(str1, str2);
//
//    return 0;
//}

//int my_strcmp(const char* src, const char* dst)
//{
//    int ret = 0;
//    assert(src);
//    assert(dst);
//    while( !(ret = *(unsigned char*) src - *(unsigned char*) dst) && src)
//    {
//        ++src;
//        ++dst;
//    }
//    if(ret > 0)
//        return 1;
//    else if(ret < 0)
//        return -1;
//        return ret;
//}

//int strcmp(const char *str1, const char *str2)
//{
//   int ret = 0;
//   while( !(ret = *(unsigned char*)str1 - *(unsigned char*)str2 ) && *str1 )
//     {
//       str1++;
//       str2++;
//     }
//     if(ret < 0)
//        return -1;
//     else if(ret > 0)
//        return 1;
//     return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//    char* ret = dest;
//    assert(dest);
//    assert(src);
//    while(*dest)
//    {
//        dest++;
//    }
//    while(*dest++ = *src++)
//    {
//        ;
//    }
//    //*dest = '\0';
//    return ret;
//}
//
//int main()
//{
//    char dest[] = "sfjsjknf";
//    char src[] = "dsgssdjkgsd";
//    char* ret = my_strcat(dest, src);
//    printf("%s\n", ret);
//
//    return 0;
//}


//int findRound(const char* src, const char* find)
//{
//    char tmp[256] = {0};
//    strcpy(tmp, src);
//    strcat(tmp, src);
//    return strstr(tmp, find) != NULL;
//}

//int main()
//{
//    char src[] = "ABCDE";
//    char find[] = "GA";
//    printf("%d\n", findRound(src, find));
//    char find1[] = "GSs";
//    printf("%d\n", findRound(src, find1));
//    return 0;
//}

void reverse_part(char* str, int start, int end)
{
    int i,j;
    char tmp;
    for(i = start, j = end; i < j; i++, j--)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
}

void leftRound(char* src, int time)
{
    int len = strlen(src);
    int pos = time % len;
    reverse_part(src, 0, pos - 1);
    reverse_part(src, pos, len - 1);
    reverse_part(src, 0, len - 1);
}

int main()
{
    char str[100] = {0};
    printf("请输入要旋转的字符串:> \n");
    scanf("%s",&str);
    printf("请输入要旋转几个字符:> \n");
    int time = 0;
    scanf("%d", &time);
    
    leftRound(str, time);
    
    return 0;
}
