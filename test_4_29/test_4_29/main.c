//
//  main.c
//  test_4_29
//
//  Created by hh on 2020/4/29.
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
    bool Find(int target, vector<vector<int> > array) {
 
        int row = (int)array.size();
        int col = (int)array[0].size();
        if (row == 0 || col == 0)
            return false;
        if (target < array[0][0] || target > array[row - 1][col - 1])
            return false;
        int i = 0;
        int j = col - 1;
        while (i < row && j >= 0)
        {
            if (array[i][j] > target)
            {
                j--;
            }
            else if (array[i][j] < target)
            {
                i++;
            }
 
            else
            {
                return 1;
            }
        }
 
        return 0;
 
    }
}
