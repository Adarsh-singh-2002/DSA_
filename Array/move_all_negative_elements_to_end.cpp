//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        //Brute Force
        vector<int> ans;
        
        for(int i = 0 ; i < n ; i++)
        {
            
            if (arr[i] >=0)
            {
                ans.push_back(arr[i]);
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            
            if (arr[i] <0)
            {
                ans.push_back(arr[i]);
            }
        }
        for(int i = 0 ; i< n ;i++)
        {
            arr[i] = ans[i];
        }
        
        //using queue
        // queue<int> pos;
        // queue<int> neg;
        
        // for(int i=0; i<n; i++){
        //     if(arr[i]<0) neg.push(arr[i]);
        //     if(arr[i]>=0) pos.push(arr[i]);
        // }
        
        //  int i=0;
        // while(!pos.empty()){
        //     arr[i]=pos.front();
        //     pos.pop();
        //     i++;
        // }
        
        // while(!neg.empty()){
        //     arr[i]=neg.front();
        //     neg.pop();
        //     i++;
        // }
        
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends