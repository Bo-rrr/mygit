20201103test

#include <iostream>
uisng namespace std;

static const auto io_sync_off=[](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int row=array.size();
        int col=array[0].size();
        if(!row||!col) return false;
        int i=row-1,j=0;
        while(i>=0&&j<col){
            if(array[i][j]>target) i--;
            else if(array[i][j]<target) j++;
            else return true;
        }
        return false;
    }
};
