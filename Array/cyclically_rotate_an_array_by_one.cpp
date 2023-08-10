void rotate(int arr[], int n)
{
    if (n > 2)
    {
        int last = arr[n-1];
        for(int i = n-1 ; i >= 1 ; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0]= last;
        
        return;
    }
    else if (n==2){
    int temp = arr[1];
    arr[1] = arr[0];
    arr[0] = temp;
    return;
    }
    else{
        return;
    }
}