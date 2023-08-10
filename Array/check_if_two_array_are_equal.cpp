#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:

    bool check(vector<long long> A, vector<long long> B, int N) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        for(long long i = 0 ; i < N ; i++)
        {
            if (A[i]!=B[i])
            {
                return 0;
            }
        }
        
        return 1;
    }
};