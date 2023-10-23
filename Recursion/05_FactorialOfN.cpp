#include <iostream>
using namespace std;

int FactorialOfN(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n*FactorialOfN(n-1);
}

int main()
{
    int n;
    cin>>n;

    int ans = FactorialOfN(n);
    cout<<ans;
    return 0;

}