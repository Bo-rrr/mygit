//
//  main.c
//  test_4_30
//
//  Created by hh on 2020/4/30.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}


class Solution {
public:
stack<int> my_stack, min_stack;
 
void push(int value)
{
    my_stack.push(value);
    if (min_stack.size() == 0)
        min_stack.push(value);
    if (value < min_stack.top())
        min_stack.push(value);
}
void pop()
{
    if (my_stack.top() == min_stack.top())
    {
        my_stack.pop();
        min_stack.pop();
    }
    else
        my_stack.pop();
}
 
int top()
{
    return my_stack.top();
}
int min()
{
    return min_stack.top();
}
}
