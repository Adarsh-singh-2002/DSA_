 #include<bits/stdc++.h>


int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
  int n = *max_element(A.begin(),A.end());
    
    vector<int> dp(n+1,INT_MAX);
    dp[0] = 0;
    for(int i = 1;i<=n ; i++)
    {
        for(int j = 0 ; j < B.size() ; j++)
        {
            if(B[j]<=i)
            {
                dp[i] = min(dp[i],C[j]+dp[i-B[j]]);
            }
        }
    }
    int ans = 0 ; 
    for(int i = 0 ; i < A.size() ; i++)
    {
        ans+=dp[A[i]];
    }
    return ans;
}