#include<bits/stdc++.h>

using namespace std;

//Parameterised 

void Swapping1(int arr[],int l,int r)
{
    if (l>r)
    return;

    swap(arr[l],arr[r]);

    return Swapping1(arr,l+1,r-1);    
}

// Function Recursive 

void Swapping2(int i,int arr[],int n)
{

    if(i>= n/2)
    {
        return;
    }
    swap(arr[i],arr[n-i-1]);

    Swapping2(i+1,arr,n);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

    Swapping1(arr,0,n-1);

    for (int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Swapping2(0,arr,n);

    for (int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}