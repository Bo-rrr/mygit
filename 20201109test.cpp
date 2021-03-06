#include <iostream>
using namespace std;

static int x=[]{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
 
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.empty())
            return 0;
        int low = 0;
        int hight = rotateArray.size() - 1;
        int mid = 0;
        while(low < hight){
            mid = low + (hight - low)/2;
            if(rotateArray[mid] >= rotateArray[hight])
                low =mid +1;
            else
                hight = mid;
        }
        return rotateArray[hight];
    }
};
