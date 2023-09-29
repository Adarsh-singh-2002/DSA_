//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        
        // brute force
        
        // int zero  = 0, one = 0, two = 0;
        
        // for(int i = 0 ; i < n ; i++)
        // {
        //     if (a[i] == 0)
        //     {
        //         zero += 1;
        //     }
        //     else if (a[i] == 1)
        //     {
        //         one += 1;
        //     }
        //     else if (a[i] == 2)
        //     {
        //         two += 1;
        //     }
            
        // }
        // int i = 0;
        // while(zero || one || two)
        // {
        //     if(zero)
        //     {
        //     a[i] = 0;
        //     i++;
        //     zero--;
        //     }
        //     else if (one)
        //     {
        //         a[i] = 1;
        //         i++;
        //         one--;
        //     }
        //     else if(two)
        //     {
        //         a[i] = 2;
        //         i++;
        //         two--;
        //     }
        // }
        
        
        // other approach
        
        int i=0,j=0,k=n-1;
        while(j<=k)
        {
            if(arr[j]==0)
            {
             swap(arr[i],arr[j]);
             i++;
             j++;
            }
            else if(arr[j]==1)
            {
                j++;
            }
            else if(arr[j]==2)
            {
                swap(arr[j],arr[k]);
                k--;
            }
        }
    
        
        
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends