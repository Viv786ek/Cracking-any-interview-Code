// first method
pair<long long, long long> getMinMax(long long a[], int n) {
    long long  min = INT_MAX,max= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]< min) min = a[i];
        if(a[i] > max) max = a[i];
    }
    
    
    return make_pair(min,max);
}

//second method
pair<long long, long long> getMinMax(long long a[], int n){
    long long rum = a[0];
    for(int i=0;i<n;i++)
    {
        rum = min(rum,a[i]);
    }
    
    long long res = a[0];
    for(int i=0;i<n;i++)
    {
        res = max(res,a[i]);
    }
    
    return make_pair(rum,res);
}
