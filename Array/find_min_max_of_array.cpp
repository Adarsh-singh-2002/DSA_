pair<long long, long long> getMinMax(long long a[], int n) {
    long long max = LONG_MIN , min = LONG_MAX;
    for(int i = 0 ; i < n ;i++)
    {
        if(a[i]>max)
        max = a[i];
        if(a[i]<min)
        min = a[i];
    }
    
    return make_pair(min,max);
    
}