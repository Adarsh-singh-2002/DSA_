#include<bits/stdc++.h>
using namespace std;

void Combination(vector<int> &arr, int ind, int target, vector<vector<int>> &ans, vector<int>&ds)
{
    if (ind == arr.size())
    {
        if(target==0)
        {
            ans.push_back(ds);
        }
        return ;
    }
    //pick condition
    if(arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        Combination(arr,ind,target-arr[ind],ans,ds);
        ds.pop_back();
    }

    //not pick condition
    Combination(arr,ind+1,target,ans,ds);
}

vector<vector<int>> combinationSum(vector<int>&arr,int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    Combination(arr,0,target,ans,ds);

    return ans;


}

int main()
{
    vector<int> arr = {3,1,2,4,1,5,2,6,4};

    int target = 5;    
    vector<vector<int>> ans = combinationSum(arr,target);

    for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
    cout << endl;
  }

    return 0;

}