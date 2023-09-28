//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        
        //BRUTE FORCE
        
        // vector<int> ans;
        
        // for(int i = 0 ; i < n ; i++)
        // {
        //     long long sum = arr[i]; 
        //     for(int j = i+1 ; j < n ; j++)
        //     {
        //         sum+= arr[j];
                
        //         if (sum == s){
        //         ans.push_back(i+1);
        //         ans.push_back(j+1);
                
        //         return ans;
        //         }
                
        //         else if (sum>s)
        //         break;
        //     }
        // }
        
        // return ans;
        
        
        //2nd approach
        
        // unordered_map<int, int> map;
        // vector<int> ans;
        
        // vector <int> final;
        // final.push_back(-1);
 
        // long long curr_sum = 0;
     
        // for (int i = 0; i < n; i++) {
            
        //     curr_sum = curr_sum + arr[i];
     
        //     if (curr_sum == s) {
        //         ans.push_back(0+1);
        //         ans.push_back(i+1);
        //         return  ans;
        //     }
     
        //     if (map.find(curr_sum - s) != map.end()) {
        //         ans.push_back(map[curr_sum - s] + 1 +1);
        //         ans.push_back(i+1);
                
        //         return ans;
        //     }
     
        //     map[curr_sum] = i;
        // }
        // return final;
        
        // 3rd approach 
        
        // int i, j;
        // long long curr_sum;
        
        // vector<int> ans;
        
        // vector <int> final;
        // final.push_back(-1);
        
 
        // for (i = 0; i < n; i++) {
        //     curr_sum = 0;
     
        //     for (j = i; j < n; j++) {
        //         curr_sum = curr_sum + arr[j];
     
        //         if (curr_sum == s) {
        //             ans.push_back(i+1);
        //             ans.push_back(j+1);
        //             return ans;
        //         }
        //     }
        // }
     
        // return final;
            
    
        //final solution
        
        int l=0,r=0;
        
        long long sum=0;
        
        if(!s)return {-1}; 
        
        while(l<=r)
        { 
            if(sum<s)sum+=arr[r++];
            
            else if(sum>s)sum-=arr[l++];
            
            else return {++l,r};
            
            if(r>n)return {-1};
            
        }
    
        return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends