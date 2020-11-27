class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        /*map<int,int> m;
        for(int i : data){
            m[i]++;
        }
        vector<int> res;
        for(int t : data){
            if(m[t] == 1){
              res.push_back(t);  
            }
        }
        *num1 = res[0];
        *num2 = res[1];*/
        int ret = 0;
        for(int i :data) ret ^= i;
        int dev = 1;
        while((dev&ret) == 0){
            dev <<= 1;
        }
        int a = 0,b = 0;
        for(int i : data){
            if(i&dev){
                a ^= i;
            }
            else b ^= i;
        }
        *num1 = a;
        *num2 = b;
    }
};
