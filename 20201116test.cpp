#include <iostream>
using namespace std;

class Solution {
public:
    static bool cmp(int a, int b)
    {
        return ((a%2)>(b%2));
    }
    void reOrderArray(vector<int> &array) {
        sort(array.begin(),array.end(),cmp);
    }
};
