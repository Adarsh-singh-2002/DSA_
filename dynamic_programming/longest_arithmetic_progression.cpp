//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lengthOfLongestAP(int A[], int n) {
        // code here
        
        //TLE
        
        // if(n<=2)
        // return n;
        // int ans = 0;
        // unordered_map<int,int> dp[n+1];
        
        // for(int i = 1 ; i < n ; i++)
        // {
        //     for(int j = 0 ; j < i ; j++)
        //     {
        //         int diff = A[i] - A[j];
                
        //         int cnt = 1;
                
        //         if(dp[j].count(diff))
        //         cnt = dp[j][diff];
                
        //         dp[i][diff] = 1+cnt;
        //         ans = max(ans,dp[i][diff]);
        //     }
        // }
        
        //correct - 1
        
        //if (n <= 2) {
        //     return n;
        // }
    
        // int maxLen = 2; // Minimum LLAP length is 2
    
        // // Create a map to store the difference and index of the last element
        // unordered_map<int, int> lastIndexOf;
    
        // // Create a 2D DP array to store the length of LLAP ending at (i, diff)
        // vector<vector<int>> dp(n, vector<int>(n, 2)); // Initialize with 2 (minimum LLAP length)
    
        // for (int i = 0; i < n; ++i) {
        //     for (int j = i + 1; j < n; ++j) {
        //         int diff = A[j] - A[i];
        //         int prevElement = A[i] - diff;
    
        //         if (lastIndexOf.find(prevElement) != lastIndexOf.end()) {
        //             dp[i][j] = dp[lastIndexOf[prevElement]][i] + 1;
        //             maxLen = max(maxLen, dp[i][j]);
        //         }
        //     }
    
        //     lastIndexOf[A[i]] = i;
        // }
    
        // return maxLen;
        
        
        //correct -2 
        
        if(n<=2)
        return n;

        int ans = 2;

        vector<vector<int>> dp(n, vector<int>(n, 2));
        
        for(int x = n - 2; x > 0; --x) {
            
            int i = x - 1;int j = x + 1;
            
            while(i >= 0 && j < n) {
                if(A[i] + A[j] == 2 * A[x]) {
                    
                    dp[i][x] = dp[x][j] + 1;
                    
                    ans = max(ans, dp[i][x]);
                    --i;
                    ++j;
                }
                else if(A[i] + A[j] < 2 * A[x]) {
                    ++j;
                }
                else {
                    --i;
                }
            }
        }

        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends