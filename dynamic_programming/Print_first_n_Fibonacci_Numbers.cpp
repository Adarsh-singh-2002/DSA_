class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> ans;
        
        ans.push_back(1);
        if(n==1)
        return ans;
        ans.push_back(1);
        if(n==2)
        return ans;
        long long prev = 1;
        
        long long prev2 = 1;
        
        
        for(int i = 2 ; i < n ; i++)
        {
            long long curi = prev+prev2;
            ans.push_back(curi);
            prev2 = prev;
            prev = curi;
        }
        
        return ans;
        
    }
};