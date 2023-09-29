//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        
        //brute force
        
        // if (n==1)
        //     return 1;
        // for(int i = 1 ; i < n-1 ; i++)
        // {
        //     long long sumleft = 0;
        //     long long sumright = 0;
            
            
            
        //     for(int left = 0 ; left < i ; left++)
        //     {
        //         sumleft += a[left];
        //     }
        //     for(int right = i+1 ; right < n ; right++)
        //     {
        //         sumright += a[right];
        //     }
            
        //     if(sumleft == sumright)
        //     {
        //         return i+1;
        //     }
        // }
        // return -1;
        
        // Other approach
        
        // if(n==1)
        // return 1;
        
        // long long sumleft = 0 ; 
        // long long sumright = 0;
        
        // long long leftarray[n];
        // long long rightarray[n];
        
        // int left = 0 ;
        // int right = n-1;
        
        // for(int i = 0 ; i < n ; i++)
        // {
        //     sumleft += a[i];
        //     leftarray[i] = sumleft; 
        // }
        // for(int i = n-1 ; i >= 0 ; i--)
        // {
        //     sumright += a[i];
        //     rightarray[i] = sumright;
        // }
        
        
        // for(int i = 1 ; i < n-1 ; i++)
        // {
        //     if(leftarray[i-1] == rightarray[i+1])
        //     {
        //         return i+1;
        //     }
        // }
        // return -1;
        
        
        //optimized 
        
        if (n==1)
        {
            return 1;
        }
        
        int l = 0;
        int r = n-1;
        
        long long sumleft = a[l];
        long long sumright = a[r];
        
        
        while(l<=r)
        {
            if(sumleft == sumright && l+2 == r)
            {
                return l+2;
            }
            
            else if(sumleft>sumright)
            {
                r--;
                sumright+=a[r];
            }
            
            else if(sumright > sumleft)
            {
                l++;
                sumleft += a[l];
            }
            else
            {
                r--;
                l++;
                sumleft+=a[l];
                sumright+=a[r];
            }
        }
        
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends