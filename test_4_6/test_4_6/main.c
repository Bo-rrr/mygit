//
//  main.c
//  test_4_6
//
//  Created by YAN on 2020/4/6.
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

//size_t my_strlen(const char* str);
//{
//    assert(str != NULL);
//    const char prt = *str;
//    while( *prt++ )
//    return count - str - 1;
//}
//
//int main()
//{
//    char ch= "hello bit";
//    int len = my_strlen(ch);
//
//    printf("%d", len);
//
//
//    return 0;
//}

//int my_strlen(const char *str)
//{
//    int count = 0;
//    assert(NULL != str);
//    while (*str)
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//int  main()
//{
//    char  arr[] = "hello world";
//    int ret = my_strlen(arr);
//    printf("%d\n", ret);
//
//    return 0;
//}

//char my_strcpy(char* dest , const char* src)
//{
//    assert(dest != NULL);
//    assert(src != NULL);
//
//    while(*dest++ = *src++);
//    return dest;
//}
//
//int main()
//{
//    char arr1[] = "#########";
//    char arr2[] = "abccdefg";
//
//    my_strcpy(arr1, arr2);
//    printf("%s\n", arr1);
//
//    return 0;
//}

//void swap_arr(int arr[], int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    int tmp = 0;
//
//    while(left < right)
//    {
//        while( (left < right) && (arr[left] % 2 == 0) )
//        {
//            left++;
//        }
//        while( (left < right) && (arr[left] % 2 == 1) )
//        {
//            right--;
//        }
//
//        if(left < right)
//        {
//            tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}
//
//int main()
//{
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//    int sz = strlen(arr);
//
//    swap_arr(arr, sz);
//    return 0;
//}

void swap_arr(int arr[], int sz)
{
    int left = 0;
    int right = sz-1;
    int tmp = 0;


    while(left<right)
    {
        while((left<right)&&(arr[left]%2==0))
        {
            left++;
        }
     
        while((left<right)&& (arr[right]%2==1))
        {
            right--;
        }
     
        if(left<right)
        {
            tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
        }
    }
}
