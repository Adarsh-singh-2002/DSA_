class Solution{
public:


    int matrix(int arr[] , int i ,int j,vector<vector<int>> &dp)
    {
        //Recursive
        // if (i == j)
        // return 0 ;
         
        // int mini = 1e9;
        
        // for(int k = i ; k<j;k++)
        // {
        //     int steps = (arr[i-1]*arr[k]*arr[j])+matrix(arr,i,k)+matrix(arr,k+1,j);
            
        //     mini = min(mini,steps);
        // }
        // return mini;

        //dp
        if ( i == j)return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int mini = 1e9;
        
        for(int k = i ; k<j;k++)
        {
            int steps = (arr[i-1]*arr[k]*arr[j])+matrix(arr,i,k,dp)+matrix(arr,k+1,j,dp);
            
            mini = min(mini,steps);
        }
        return dp[i][j] = mini;
        
        
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        vector<vector<int>> dp(N,vector<int>(N,-1));
        return matrix(arr , 1 , N-1,dp);
        
    }
    
};