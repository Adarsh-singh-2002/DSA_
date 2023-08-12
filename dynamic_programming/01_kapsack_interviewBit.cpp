#include<bits/stdc++.h>
using namespace std;

int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    // A is value , B is weights, C is knapsack capacity
    int N = A.size();
    int mat[N+1][C+1];
    for(int i = 0; i<=N; i++){
        for(int j = 0; j<=C; j++){
            if(i == 0 || j == 0) mat[i][j] = 0;
            // if item can be chosen
            else if(B[i-1] <= j) mat[i][j] = max(mat[i-1][j], mat[i-1][j-B[i-1]] + A[i-1]);
            //ignore curr item and put value of top ele in curr cell
            else  mat[i][j] = mat[i-1][j];
        }
    }
    return mat[N][C];
    
}