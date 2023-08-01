class Solution {

    void help(int i, int n, int k, vector<int> &subSet, vector<vector<int>> &ans)
{
    if (k == 0)
    {
        ans.push_back(subSet);
        return;
    }
    if (k > n - i + 1)
        return;

    if (i > n)
        return;

    subSet.push_back(i);
   
    help(i + 1, n, k - 1, subSet, ans);

    subSet.pop_back();

    help(i + 1, n, k, subSet, ans);
}
public:
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> ans ;
    vector<int> subSet  ;
        
    help(1 , n , k , subSet , ans) ;
        
    return ans ;
    }
};