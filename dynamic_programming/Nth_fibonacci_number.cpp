class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        int  prev2 = 1; 
        int  prev1 = 1;
        int  curi = 0;
         
        if( n == 1 || n == 2 )
        return 1;
        
        for(int i = 2 ; i < n ;i++)
        {
            curi = (prev1+prev2)%1000000007;
            
            prev2 = prev1;
            prev1 = curi;
            
        }        
        return curi;        
    }
};