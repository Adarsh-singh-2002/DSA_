#include<iostream>

using namespace std;

void printNames(int n)
{
    if (n==0)
    {
        return;
    }
    cout<<"Adarsh "<<endl;
    printNames(n-1);
}

int main()
{
    int n;
    cin>>n;

    printNames(n);

}
