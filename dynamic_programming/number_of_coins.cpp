int minCoins(int coins[], int M, int V) 
	{
	    // Your code goes here.
	    vector<vector<int>> dp(M,vector<int>(V+1,0));
	    
	    for(int i = 0 ; i <= V ; i++)
	    {
	        if(i %coins[0] == 0)
	        dp[0][i] = i/coins[0];
	        else
	        dp[0][i]= 1e9;
	    }
	    
	    for(int ind = 1; ind<M; ind++){
        for(int target = 0; target<=V; target++){
            
            int notTake = 0 + dp[ind-1][target];
            int take = 1e9;
            if(coins[ind]<=target)
                take = 1 + dp[ind][target - coins[ind]];
                
             dp[ind][target] = min(notTake, take);
        }
    }
    
    int ans = dp[M-1][V];
    if(ans >=1e9) return -1;
    return ans;
	    
	} 