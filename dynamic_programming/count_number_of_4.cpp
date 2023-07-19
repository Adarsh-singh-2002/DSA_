

bool has4(int x);
class Solution {
  public:
    // int countNumberswith4(int N) {
    //     // code here
    //     int count = 0 ;
    //     for(int i = 0 ; i < N ; i++)
    //     {
    //         while(i>0)
    //         {
    //             int rem= i%10;
    //             if (rem == 4){
    //             count+=1;
    //             break;}
                
    //             i = i/10;
    //         }
            
            
    //     }
    //     return count;
        
    // }
 
    // Returns sum of all digits in numbers from 1 to n
    int countNumberswith4(int n)
    {
        int result = 0; // initialize result
     
        // One by one compute sum of digits in every number from
        // 1 to n
        for (int x=1; x<=n; x++)
            result += has4(x)? 1 : 0;
     
        return result;
    }
     
    // A utility function to compute sum of digits in a
    // given number x
    bool has4(int x)
    {
        while (x != 0)
        {
            if (x%10 == 4)
               return true;
            x   = x /10;
        }
        return false;
    }
};