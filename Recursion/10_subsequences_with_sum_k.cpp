#include<bits/stdc++.h>
using namespace std;

//printing subsequence with sum as k

// void subsequence_with_sum(int ind,vector<int> &ds, int s, int sum,int arr[], int n)
// {
//     if(ind==n)
//     {
//         if(s==sum)
//         {
//             for(auto it:ds)
//             {cout<<it<<" ";}
//             cout<<endl;
            
//         }
//         return;
//     }
        
//         ds.push_back(arr[ind]);
//         s+= arr[ind];
//         subsequence_with_sum(ind+1,ds,s,sum,arr,n);

        
//         s-=arr[ind];
//         ds.pop_back();
//         subsequence_with_sum(ind+1,ds,s,sum,arr,n);

    
// }

//printing only one subsequence with sum k 

// bool subsequence_with_sum(int ind,vector<int> &ds, int s, int sum,int arr[], int n)
// {
//     if(ind==n)
//     {
//         if(s==sum)
//         {
//             for(auto it:ds)
//             {cout<<it<<" ";}
//             cout<<endl;
//             return true;
            
//         }
//         else 
//         return false;
        
//     }
        
//         ds.push_back(arr[ind]);
//         s+= arr[ind];
//         if(subsequence_with_sum(ind+1,ds,s,sum,arr,n)==true){
//             return true;
//         }

        
//         s-=arr[ind];
//         ds.pop_back();
//         if(subsequence_with_sum(ind+1,ds,s,sum,arr,n)==true)
//         {
//             return true;
//         }
        
// }

//printing the number of subsequences with sum k

int subsequence_with_sum(int ind,vector<int> &ds, int s, int sum,int arr[], int n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            return 1;
        }
        else 
        return 0;
        
    }
        
        ds.push_back(arr[ind]);
        s+= arr[ind];
        int l = subsequence_with_sum(ind+1,ds,s,sum,arr,n);

        
        s-=arr[ind];
        ds.pop_back();
        int r = subsequence_with_sum(ind+1,ds,s,sum,arr,n);

        return l+r;
}




int main()
{
    // int n;
    // cin>>n;

    // int arr[n];
    // int sum;
    // cin>>sum;

    // for(int i = 0 ; i<n ; i++)
    // {
    //     cin>>arr[i];
    // }
    int n = 3;

    int arr[n] = {1,2,1};

    int sum = 2;

    vector<int> ds;

    cout<<subsequence_with_sum(0,ds,0,sum,arr,n);
    // subsequence_with_sum(0,ds,0,sum,arr,n);
}