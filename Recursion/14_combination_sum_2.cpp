#include<bits/stdc++.h>
using namespace std;//new comment
void combinationSum(int ind , int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds)
{
    if(target==0)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = ind; i < arr.size(); i++) 
    {
        if (i > ind && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > target) 
            break;

        ds.push_back(arr[i]);
        combinationSum(i + 1, target - arr[i], arr, ans, ds);
        ds.pop_back();
    }

}

vector<vector<int>> findCombination(vector<int> &arr, int target) {
  sort(arr.begin(), arr.end());
  vector < vector < int >> ans;
  vector < int> ds;
  combinationSum(0, target, arr, ans, ds);
  return ans;
}
int main() {
  vector<int> v{10,1,2,7,6,1,5};
  vector < vector < int >> comb = findCombination(v, 8);
  cout << "[ ";
  for (int i = 0; i < comb.size(); i++) {
    cout << "[ ";
    for (int j = 0; j < comb[i].size(); j++) {
      cout << comb[i][j] << " ";
    }
    cout << "],";
  }
  cout << " ]";
}