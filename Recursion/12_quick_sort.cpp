#include<bits/stdc++.h>
using namespace std;

int f( vector<int> &arr, int low , int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;


    while (i< j)
    {
        while(arr[i]<=pivot && i<= high-1)
        {
            i++;
        }
        while(arr[j]>pivot && j>=low+1)
        {
            j--;
        }

        if (i<j) swap(arr[i],arr[j]);

    }
    swap(arr[low],arr[j]);
    return j;
}

void quickS(vector<int> &arr , int low , int high)
{
    if (low<high)
    {
        int partition = f(arr,low,high);

        quickS(arr,low,partition-1);
        quickS(arr,partition+1,high);

    }
}
vector<int> quickSort(vector<int> arr)
{
    quickS(arr,0,arr.size()-1);

    return arr;
}


int main()
{
vector<int> arr = {3,1,2,4,1,5,2,6,4};

    int n = arr.size();

    arr=quickSort(arr);

    for(auto i : arr)
    {
        cout<<i<<" ";
    }

    return 0;
}