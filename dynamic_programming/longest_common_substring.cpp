//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:

    
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        
        int X = n;
        int Y = m;
        
        int dp[X+1][Y+1];
	    int lcs = 0;
	    int x1,y1;
	    for(int i=0;i<=X;++i)
	        dp[i][0]=0;
	    for(int i=0;i<=Y;++i)
	        dp[0][i]=0;
	    
	    for(int i=1;i<=X;++i)
	    {
	        for(int j=1;j<=Y;++j)
	        {
	            if(s1[i-1]==s2[j-1])
	            {
	                dp[i][j] = 1 + dp[i-1][j-1];
	                if(lcs < dp[i][j])
	                {
	                    lcs = dp[i][j];
	                    x1 = i;
	                    y1 = j;
	                }
	            }
	            else
	                dp[i][j]=0;
	        }
	    }
	   
	  return lcs;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends