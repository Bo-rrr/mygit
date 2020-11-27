#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * 
     * @param matrix int整型vector<vector<>> 
     * @param target int整型 
     * @return bool布尔型
     */
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        int m=0;
        int n=matrix[0].size();
        if(matrix.size()<=0||matrix[0].size()<=0)
            return false;
        while(m<matrix.size()&&n>0){
            int num = matrix[m][n-1];
            if(num==target){
                return true;
            }
            if(num<target){
                m+=1;
            }
            else{
                n-=1;
            }
        }
        return false;
    }
};
