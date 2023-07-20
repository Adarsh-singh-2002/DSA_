class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> ans;
        int buy = 0;
        int sell = 0;
        for(int i = 0 ; i < n-1 ; i++)
        {
            
            if(A[i+1]>A[i])
            {
                sell++;
            }
            else
            {
                if(sell>buy)
                {
                vector<int> li = {buy,sell};
              ans.push_back(li);
                }
                buy = i+1;
                sell = i+1;
            }
        }
        if(sell>buy)
                {
                vector<int> li = {buy,sell};
              ans.push_back(li);
                }
    
    return ans;
        
    }
};