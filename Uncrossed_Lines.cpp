class Solution {
public:
    // int f(int i , int j,vector<int>& nums1, vector<int>& nums2,vector<vector<int>>&dp) {
    //     if(i == nums1.size() || j == nums2.size()) return 0;
    //      if(dp[i][j]!=-1)return dp[i][j];
    //     int count = 0; 
    //     if (nums1[i] == nums2[j])
    //     count = 1 + f(i+1,j+1,nums1,nums2,dp);
    //     else
    //     count = max(f(i+1,j,nums1,nums2,dp),f(i,j+1,nums1,nums2,dp));
    //     return dp[i][j] = count;
    // }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        // vector<vector<int>> dp(nums1.size(),vector<int>(nums2.size(),-1));
        // return f(0,0,nums1,nums2,dp);
        int n = nums1.size(), m = nums2.size();
        if (n < m) return maxUncrossedLines(nums2, nums1);
        vector<int> dp(m + 1);
        for (int i = 1; i <= n; i++)
        {
            int prev = 0;
            for (int j = 1; j <= m; j++)
            {
                int curr = dp[j];
                if (nums1[i-1] == nums2[j-1]) 
                {
                    dp[j] = prev + 1;
                } 
                else 
                {
                    dp[j] = max(dp[j-1], curr);
                }

                prev = curr;
            }
        }
        return dp[m];
    }
};