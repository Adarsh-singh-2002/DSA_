#include <iostream>
using namespace std;

void PrintingLinearly(int n)
{
    if(n==0)
    {
        return ;
    }

    PrintingLinearly(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;

    PrintingLinearly(n);

    return 0;
}