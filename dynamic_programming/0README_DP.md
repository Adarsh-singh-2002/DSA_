>0-1 Knapsack InterviewBit
Dynamic Programming

Problem Description

Given two integer arrays A and B of size N each which represent values and weights associated with N items respectively.

Also given an integer C which represents knapsack capacity.

Find out the maximum value subset of A such that sum of the weights of this subset is smaller than or equal to C.

NOTE:
You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).

Problem Constraints
1 <= N <= 103
1 <= C <= 103
1 <= A[i], B[i] <= 103


>Tushar's Birthday Party
Dynamic Programming

Problem Description

As it is Tushar's Birthday on March 1st, he decided to throw a party to all his friends at TGI Fridays in Pune. Given are the eating capacity of each friend, the filling capacity of each dish and the cost of each dish. A friend is satisfied if the sum of the filling capacity of dishes he ate is equal to his capacity. Find the minimum cost such that all of Tushar's friends are satisfied (reached their eating capacity).

NOTE:
Each dish is supposed to be eaten by only one person. Sharing is not allowed.
Each friend can take any dish an unlimited number of times.
There always exists a dish with a filling capacity of 1 so that a solution always exists.

>Matrix Chain Multiplication

Given a sequence of matrices, find the most efficient way to multiply these matrices together. The efficient way is the one that involves the least number of multiplications.

The dimensions of the matrices are given in an array arr[] of size N (such that N = number of matrices + 1) where the ith matrix has the dimensions (arr[i-1] x arr[i]).

>Nth catalan number

Given a number N. The task is to find the Nth catalan number.
The first few Catalan numbers for N = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …

Catalan Number for N is equal to the number of expressions containing N pairs of paranthesis that are correct matched, i.e., for each of the N '(' there exist N ')' on there right and vice versa.

Since answer can be huge return answer modulo 1e9+7.

Note: Positions start from 0 as shown above.