#include <iostream>

using namespace std;

void PrintLinearly(int count, int n)
{
    if(count > n)
    {
        return;
    }
    cout<<count<<endl;
    PrintLinearly(count+1,n);
}

int main()
{
    int n ;
    cin>> n;

    PrintLinearly(1,n);
}