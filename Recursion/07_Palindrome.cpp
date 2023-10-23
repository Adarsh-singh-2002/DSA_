#include<bits/stdc++.h>

using namespace std;


bool Pali(string s, int l,int r)
{
    if(l>r)
    return true;

    if(s[l]!= s[r])
    return false;

    Pali(s,l+1,r-1);

}

bool Pali(string &s, int i)
{
    if(i>=(s.size()-1)/2)
    return true;

    if(s[i]!= s[s.size()-i-1])
    return false;

    Pali(s,i+1);
}

int main()
{
    string s;
    cin>>s;

    int ans = Pali(s,0,s.size()-1);

    if(ans==0)
    {
    cout<<"not Palindrome";
    }
    else{
    cout<<"Palindrome";
    }

    int res = Pali(s,0);

    if(res==0)
    {
    cout<<"not Palindrome";
    }
    else{
    cout<<"Palindrome";
    }
}