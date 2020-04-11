//
//  main.c
//  test_4_11
//
//  Created by YAN on 2020/4/11.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

//void main()
//{
//int a[] = {1,2,3,4};
//printf("%d\n",sizeof(a));
//printf("%d\n",sizeof(a+0)); printf("%d\n",sizeof(*a)); printf("%d\n",sizeof(a+1)); printf("%d\n",sizeof(a[1])); printf("%d\n",sizeof(&a)); printf("%d\n",sizeof(*&a)); printf("%d\n",sizeof(&a+1)); printf("%d\n",sizeof(&a[0])); printf("%d\n",sizeof(&a[0]+1));

//    char arr[] = {'a','b','c','d','e','f'};
//    printf("%d ", sizeof(arr));
//    printf("%d ", sizeof(arr+0));
//    printf("%d ", sizeof(*arr));
//    printf("%d ", sizeof(arr[1]));
//    printf("%d ", sizeof(&arr));
//    printf("%d ", sizeof(&arr+1));
//    printf("%d\n", sizeof(&arr[0]+1));
//
//    printf("%d ", strlen(arr));
//    printf("%d ", strlen(arr+0));
//    printf("%d ", strlen(*arr));
//    printf("%d ", strlen(arr[1]));
//    printf("%d ", strlen(&arr));
//    printf("%d ", strlen(&arr+1));
//    printf("%d\n", strlen(&arr[0]+1));
    
//    char arr[] = "abcdef";
//    printf("%d\n", sizeof(arr));
//    printf("%d\n", sizeof(arr+0));
//    printf("%d\n", sizeof(*arr));
//    printf("%d\n", sizeof(arr[1]));
//    printf("%d\n", sizeof(&arr));
//    printf("%d\n", sizeof(&arr+1));
//    printf("%d\n", sizeof(&arr[0]+1));
//    printf("%d\n", strlen(arr));
//    printf("%d\n", strlen(arr+0));
//    printf("%d\n", strlen(*arr));
//    printf("%d\n", strlen(arr[1]));
//    printf("%d\n", strlen(&arr));
//    printf("%d\n", strlen(&arr+1));
//    printf("%d\n", strlen(&arr[0]+1));
//
    
//    char *p = "abcdef";
//    printf("%d\n", sizeof(p));
//    printf("%d\n", sizeof(p+1));
//    printf("%d\n", sizeof(*p));
//    printf("%d\n", sizeof(p[0]));
//    printf("%d\n", sizeof(&p));
//    printf("%d\n", sizeof(&p+1));
//    printf("%d\n", sizeof(&p[0]+1));
//    printf("%d\n", strlen(p));
//    printf("%d\n", strlen(p+1));
//    printf("%d\n", strlen(*p));
//    printf("%d\n", strlen(p[0]));
//    printf("%d\n", strlen(&p));
//    printf("%d\n", strlen(&p+1));
//    printf("%d\n", strlen(&p[0]+1));
    
//    int a[3][4] = {0};
//    printf("%d\n",sizeof(a)); printf("%d\n",sizeof(a[0][0])); printf("%d\n",sizeof(a[0])); printf("%d\n",sizeof(a[0]+1)); printf("%d\n",sizeof(*(a[0]+1))); printf("%d\n",sizeof(a+1)); printf("%d\n",sizeof(*(a+1))); printf("%d\n",sizeof(&a[0]+1)); printf("%d\n",sizeof(*(&a[0]+1))); printf("%d\n",sizeof(*a)); printf("%d\n",sizeof(a[3]));
    
//    int main() {
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int *ptr = (int *)(&a + 1);
//    printf( "%d,%d", *(a + 1), *(ptr - 1)); return 0;
//    }
//}

//int main() {
//int a[4] = { 1, 2, 3, 4 };
//int *ptr1 = (int *)(&a + 1);
//int *ptr2 = (int *)((int)a + 1); printf( "%x,%x", ptr1[-1], *ptr2); return 0;
//}


//#include <stdio.h>
//int main(int argc, char * argv[]) {
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int *p;
//    p = a[0];
//    printf( "%d", p[0]);}
