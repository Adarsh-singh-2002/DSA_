class Solution
{
    int mod = 1e9+7;
    public:
    //Function to find the nth catalan number.

    int findCatalan(int n) 
    {
        //code here
        vector<int> dp(n+1, 1);
        for(int N = 2; N <= n; N++){
            int sum = 0;
            for(int i = 0; i < N; i++){
                sum = ((sum%mod) + ((long long)(dp[i]%mod)*((long long)dp[N-i-1]%mod)))%mod;
            }
            dp[N] = sum%mod;
        }
        return dp[n]%mod;
        //int dp[n];
        // dp[0] = 1;
        // dp[1] = 1;
        // for(int i = 2 ; i <= n ; i++)
        // {
        //     dp[i] = 0;
        // }
        
        // for(int i = 2 ; i <= n ; i++)
        // {
        //     dp[i] = 0;
        //     for(int j = 0 ; j < i; j++)
        //     {
        //         dp[i]+=(dp[j]*dp[i-j-1])%MOD;
        //     }
        // }
        
        // return dp[n]%MOD;
        
        
    }
    
    
};