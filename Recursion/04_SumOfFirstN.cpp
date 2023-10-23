#include<iostream>
using namespace std;

//parameterised 

int SumOfN(int n, int sum)
{
    if(n==0)
    return sum;

    return SumOfN(n-1,sum+=n);
}

//functional recursive

int SumOfN(int n)
{
    if(n==0)
    return 0;

    return n+SumOfN(n-1);
}


int main()
{
    int n;
    cin>>n;

    int ans1 = SumOfN(n,0);
    cout<<ans1<<endl;

    int ans2 = SumOfN(n);
    cout<<ans2<<endl;


    return 0;
}