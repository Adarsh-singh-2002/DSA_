#include<bits/stdc++.h>
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    
    //Recursive
    // int LCS(int n, int m, string s1, string s2)
    // {
        
    //     // your code here
    //     if(n<0 || m < 0)
    //     return 0;
        
    //     if(s1[n]==s2[m])
    //     return 1 + LCS(n-1,m-1,s1,s2);
        
    //     return max(LCS(n-1,m,s1,s2),LCS(n,m-1,s1,s2));
        
    // }
    
    //DP
    // int LCS(int n, int m, string s1, string s2, vector<vector<int>> &dp )
    // {
        
    //     // your code here
    //     if(n<0 || m < 0)
    //     return 0;
        
    //     if (dp[n][m] != -1)
    //     return dp[n][m];
        
    //     if(s1[n]==s2[m])
    //     return dp[n][m] = 1 + LCS(n-1,m-1,s1,s2,dp);
        
    //     return dp[n][m] = max(LCS(n-1,m,s1,s2,dp),LCS(n,m-1,s1,s2,dp));
        
    // }
    
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
    //     vector<vector<int>>dp (n, vector<int>(m,-1));
    //   return LCS(n-1,m-1,s1,s2,dp);
    
    //tabulation
    
    // vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    
    // for(int i = 0 ; i <= n ; i++) dp[i][0] = 0;
    // for(int i = 0 ; i <= n ; i++) dp[0][i] = 0;
    
    // for(int i = 1 ; i <= n ; i++)
    // {
    //     for(int j = 1 ; j<=m;j++)
    //     {
    //         if(s1[i]==s2[j])
    //             dp[i][j] = 1 + dp[i-1][j-1];
                
    //         else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
    //     }
    // }
    // return dp[n][m];
    
    
    //most optimzed
    vector<int> prev(m+1,0), cur(m+1,0);
    
    
    for(int ind1=1;ind1<=n;ind1++){
        for(int ind2=1;ind2<=m;ind2++){
            if(s1[ind1-1]==s2[ind2-1])
                cur[ind2] = 1 + prev[ind2-1];
            else
                cur[ind2] = 0 + max(prev[ind2],cur[ind2-1]);
        }
        prev= cur;
    }
    
    return prev[m];
    }
};
