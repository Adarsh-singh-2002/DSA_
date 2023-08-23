//{ Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        if (N == 1)
        {
            return ;
        }
        
        //Brute Force
        // int ptrStart = 0;
        // int ptrEnd = N-1;
        
        // while(ptrEnd!=ptrStart || ptrEnd>ptrStart)
        // {
        //     if(A[ptrStart]==0 && A[ptrEnd]==0)
        //     {
        //         ptrEnd--;
        //     }
        //     else if(A[ptrStart]==0 && A[ptrEnd]==1)
        //     {
        //         ptrEnd--;
        //         ptrStart++;
        //     }
        //     else if(A[ptrStart]==1 && A[ptrEnd]==1)
        //     {
        //         ptrEnd--;
        //     }
        //     else if(A[ptrStart]==1 && A[ptrEnd]==0)
        //     {
        //         A[ptrStart] = 0;
        //         A[ptrEnd] = 1;
        //         ptrEnd--;
        //         ptrStart++;
        //     }
            
        // }
        
        int count0 = 0;
        int count1 = 0;
        for(int i = 0 ; i < N ; i++)
        {
            if(A[i]==0)
            count0++;
            if(A[i]==1)
            count1++;
        }
        int ptr=0;
        while(count0!=0){
        A[ptr]=0;
        count0--;
        ptr++;
        }
        while(count1!=0){
        A[ptr]=1;
        count1--;
        ptr++;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}




// } Driver Code Ends