class solution
{
    public:

    long long int count(int coins[], int N, int sum) {

        // code here.
        vector<vector<long long>> dp(N,vector<long long>(sum+1,0));
        for(int i = 0 ; i <= sum ; i++)
        {
            dp[0][i] = (i%coins[0]==0);
        }
        for(int index = 1 ; index < N ; index++)
        {
            for(int i = 0 ; i <= sum ;i++)
            {
                long long notTake = dp[index-1][i];
                long long take = 0 ;
                
                if(coins[index]<=i) take = dp[index][i-coins[index]];
                dp[index][i]=take+notTake;
            }
        }
        
        return dp[N-1][sum];
    }
};