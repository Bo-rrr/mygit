class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int n = array.size();
        vector<int> dp(n+1,0);
        dp[0] = 0;
        int ans = array[0];
        for(int i = 1; i <= n; i++)
        {
            dp[i] = max(array[i-1] , dp[i-1] + array[i-1]);
            ans = max(ans, dp[i]);
        }
        
        return ans;
    }
};
