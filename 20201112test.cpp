#include <iostream>
using namespace std;

class Solution {
public:
    int jumpFloorII(int number) {
        int f[number+1];
        f[1]=1;
        f[2]=2;
        for(int i=3;i<=number;i++)
        {
            f[i]=2*f[i-1];
        }
        return f[number];
    }
};
