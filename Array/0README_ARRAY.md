<h1 style="color:red">Array</h1>
>Search an Element in an array

Join the most popular course on DSA. Master Skills & Become Employable by enrolling today! 
Given an integer array and another integer element. The task is to find if the given element is present in array or not.

Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2
Explanation: There is one test case 
with array as {1, 2, 3 4} and element 
to be searched as 3.  Since 3 is 
present at index 2, output is 2.


>Check if two arrays are equal or not

Join the most popular course on DSA. Master Skills & Become Employable by enrolling today! 
Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

Example 1:

Input:
N = 5
A[] = {1,2,5,4,0}
B[] = {2,4,5,0,1}
Output: 1
Explanation: Both the array can be 
rearranged to {0,1,2,4,5}

>Missing element of AP

Join the most popular course on DSA. Master Skills & Become Employable by enrolling today! 
Find the missing element from an ordered array arr[], consisting of N elements representing an Arithmetic Progression(AP).

Note: There always exists an element which upon inserting into sequence forms Arithmetic progression. Boundary elements (first and last elements) are not missing.

Example 1:

Input:
N = 6
Arr[] = {2, 4, 8, 10, 12, 14}
Output: 6
Explanation: Actual AP should be 
2, 4, 6, 8, 10, 12, 14.

>Cyclically rotate an array by one

Join the most popular course on DSA. Master Skills & Become Employable by enrolling today! 
Given an array, rotate the array by one position in clock-wise direction.
 
Example 1:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4

>Find minimum and maximum element in an array

Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

>Binary Array Sorting

Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.

Example 1:

Input: 
5
1 0 1 1 0

Output: 
0 0 1 1 1

Explanation: 
After arranging the elements in 
increasing order, elements will be as 
0 0 1 1 1.

 >Move all negative elements to end

Given an unsorted array arr[] of size N having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

Example 1:

Input : 
N = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5

>Missing number

Vaibhav likes to play with numbers and he has N numbers. One day he was placing the numbers on the playing board just to count that how many numbers he has. He was placing the numbers in increasing order i.e. from 1 to N. But when he was putting the numbers back into his bag, some numbers fell down onto the floor. He picked up all the numbers but one number, he couldn't find. Now he has to go somewhere urgently, so he asks you to find the missing number.
NOTE: Don't use Sorting

>Find the fine

Given an array of penalties fine[], an array of car numbers car[], and also the date. The task is to find the total fine which will be collected on the given date. Fine is collected from odd-numbered cars on even dates and vice versa.

Example 1:

Input:
N = 4, date = 12
car[] = {2375, 7682, 2325, 2352}
fine[] = {250, 500, 350, 200}
Output:
600
Explantion:
The date is 12 (even), so we collect the
fine from odd numbered cars. The odd
numbered cars and the fines associated
with them are as follows:
2375 -> 250
2325 -> 350
The sum of the fines is 250+350 = 600

>Greater on right side

You are given an array Arr of size N. Replace every element with the next greatest element (greatest element on its right side) in the array. Also, since there is no element next to the last element, replace it with -1.

Example 1:

Input:
N = 6
Arr[] = {16, 17, 4, 3, 5, 2}
Output:
17 5 5 5 2 -1
Explanation: For 16 the greatest element 
on its right is 17. For 17 it's 5. 
For 4 it's 5. For 3 it's 5. For 5 it's 2. 
For 2 it's -1(no element to its right). 
So the answer is 17 5 5 5 2 -1

>Remove duplicate elements from sorted Array

Given a sorted array A[] of size N, delete all the duplicated elements from A[]. Modify the array such that if there are X distinct elements in it then the first X positions of the array should be filled with them in increasing order and return the number of distinct elements in the array.

Note:
1. Don't use set or HashMap to solve the problem.
2. You must return the number of distinct elements(X) in the array, the driver code will print all the elements of the modified array from index 0 to X-1 as output of your code.

>Subarray with given sum

Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.

In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.

Note:- You have to return an ArrayList consisting of two elements left and right. In case no such subarray exists return an array consisting of element -1.

>ort an array of 0s, 1s and 2s

Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.

>Equilibrium Point

Given an array A of n positive numbers. The task is to find the first equilibrium point in an array. Equilibrium point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists. 

Example 1:

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 
3 
Explanation:  
equilibrium point is at position 3 as sum of elements before it (1+3) = sum of elements after it (2+2). 

>Peak element

An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
Given an array arr[] of size N, Return the index of any one of its peak elements.
Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0.

Example 1:      

Input: 
N = 3
arr[] = {1,2,3}
Possible Answer: 2
Generated Output: 1
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.
If 2 is returned then the generated output will be 1 else 0.

>Find Transition Point

Given a sorted array containing only 0s and 1s, find the transition point. 

Example 1:

Input:
N = 5
arr[] = {0,0,0,1,1}
Output: 3
Explanation: index 3 is the transition 
point where 1 begins.

>question
