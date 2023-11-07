#include<bits/stdc++.h>

using namespace std;

void printF(int ind, vector<int> &ds,int arr[],int n)
{
    if(ind == n)
    {
        for(auto it : ds)
        cout<<it<<" ";

        cout<<endl;
        return ;
    }

    //for take condition 

    ds.push_back(arr[ind]);
    printF(ind+1, ds,arr,n);

    //for not take condition
    ds.pop_back();
    printF(ind+1, ds,arr,n);

}

int main()
{
    // int n;
    // cin>>n;
    // int arr[n];

    // for (int i = 0 ; i < n ; i++)
    // {
    //     cin>>arr[i];
    // }
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    vector<int> ds;

    printF(0,ds,arr,n);
}