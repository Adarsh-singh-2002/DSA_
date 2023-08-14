class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long max_sum = LONG_MIN;
        long long sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            sum+=arr[i];
            if(sum>max_sum)
            max_sum = sum;
            
            if(sum<0)
            sum = 0;
        }
        return max_sum;
        
    }
};