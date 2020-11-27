20201113test

#include <iostream>
using namesapce std;

class Solution {
public:
    int rectCover(int number) {
       if(number == 1 || number == 0) return number;
       if(number == 2) return 2;
       int a = 1, b = 2, c;
        for(int i = 3; i <= number; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};
