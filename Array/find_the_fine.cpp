//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        //brute force
        // long long int total=0;
        
        // int flag = 1;
        // if (date%2 == 0)
        // flag = 0;
        
        
        // for(int i = 0 ; i < n ; i++)
        // {
        //     int val = car[i]%10;
            
        //     if (flag ==1)
        //     {
        //         if (val % 2 == 0)
        //         total+=fine[i];
        //     }
        //     if (flag ==0)
        //     {
        //         if (val % 2 != 0)
        //         total+=fine[i];
        //     }
        // }
        
        // return total;
        
        // optimized
        long long int  total=0;
        for(int i = 0 ; i < n ; i++)
        {
            if(((car[i]^date)&1) ==1)
            total += fine[i];
        }
        
        return total;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, date;
        cin >> n >> date;
        int car[n], fine[n];
        
        for (i = 0; i < n; i++){
            cin >> car[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> fine[i];
        }
        Solution obj;
        cout << obj.totalFine(n, date, car, fine) << endl;
    }
    return 0;
}

// } Driver Code Ends