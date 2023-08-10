class Solution{   
public:
    int findMissing(int arr[], int n) {
        
        int diff0 = arr[1] - arr[0] ;
        int diff1 = arr[2] - arr[1];
        
        int diff = (diff0<diff1 ?arr[1] - arr[0]:arr[2] - arr[1] );
        
        if(n == 2)
        return (arr[1]+arr[0])/2;
        
        for (int i = 0 ;  i < n ; i++)
        {
            int check = arr[0]+(i)*diff;
            if (arr[i] != check)
            {
                return check;
            }
        }
        return 0;
    }
};