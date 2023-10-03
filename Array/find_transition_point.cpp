//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    
    //brute force 
    
    // if (n == 1)
    // {
    //     if (arr[0]==1)
    //     return 0;
    // }
    
    // if( arr[0]==1)
    // {
    //     return 0;
    // }
    
    // for( int i = 1 ; i < n ; i++)
    // {
    //     if (arr[i-1] != arr[i])
    //     {
    //         return i;
    //     }
    // }
    
    // return -1;
    
    //optimized approach 
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==1 && arr[mid-1]==0)
        return mid;
        
        else if(arr[mid]==0)
        l=mid+1;
        else
        h=mid-1;
    }
    return -1;
}