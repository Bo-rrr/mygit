class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        int n = input.size();
         vector<int> ans;
        if(n<k) return ans;  // k>n输出空数组，k==n就输出input
        if(k==0||n==0) return ans;
        //if(!input.size()||k>input.size()||k==0)return ans;
        priority_queue<int, vector<int>, less<int>> pq;
        for (int i = 0; i < n; ++i) {
            if(pq.size() < k) pq.push(input[i]);
            else if (pq.top()>input[i]) {  // 小心 输入k=0
                    pq.pop();
                    pq.push(input[i]);
            }
        }
        while(!pq.empty()) {
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};
