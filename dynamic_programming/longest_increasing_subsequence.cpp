//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    
    // int Subsequence(int ind , int prev_ind, int arr[], int n)
    // {
    //   // your code here
    //   if(ind == n )return 0;
       
    //   int len = 0 +Subsequence(ind+1,prev_ind,arr,n);
       
    //   if(prev_ind == -1 || arr[ind]>arr[prev_ind])
    //   len = max(len,1+Subsequence(ind+1,ind,arr,n));
       
    //   return len;
    // }
    
    //dp
    // int Subsequence(int ind , int prev_ind, int arr[], int n, vector<vector<int>> &dp)
    // {
    //   // your code here
    //   if(ind == n )return 0;
      
    //  if(dp[ind][prev_ind+1]!=-1)
    //  return dp[ind][prev_ind+1];
    //   int len = 0 +Subsequence(ind+1,prev_ind,arr,n,dp);
       
    //   if(prev_ind == -1 || arr[ind]>arr[prev_ind])
    //   len = max(len,1+Subsequence(ind+1,ind,arr,n,dp));
       
    //   return dp[ind][prev_ind+1] = len;
    // }
    
    int getAns(int arr[], int n,  int ind, int prev_index, vector<vector<int>>& dp){
    
    // base condition
    if(ind == n)
        return 0;
        
    if(dp[ind][prev_index+1]!=-1)
        return dp[ind][prev_index+1];
    
    int notTake = 0 + getAns(arr,n,ind+1,prev_index,dp);
    
    int take = 0;
    
    if(prev_index == -1 || arr[ind] > arr[prev_index]){
        take = 1 + getAns(arr,n,ind+1,ind,dp);
    }
    
    return dp[ind][prev_index+1] = max(notTake,take);
}
    
    
    
    
    
    int longestSubsequence(int n, int a[])
    {
       // your code here
       
       vector<vector<int>> dp(n,vector<int>(n+1,-1));
       return getAns(a,n,0 ,-1, dp);
       
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends