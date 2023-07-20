class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        long long res[n+1];
        res[0] = 1;
        res[1] = 1;
        res[2] = 2;
        for(int i = 3 ; i <= n ; i++) 
        {
            res[i] = (res[i-1]%1000000007+res[i-2]%1000000007+res[i-3]%1000000007)%1000000007;
        }
      
    
        return res[n]%1000000007;
    }