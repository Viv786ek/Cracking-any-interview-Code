int countZeroes(int arr[], int n) {
    // code here
    if(arr[n-1] == 1) return 0;
    if(arr[0]== 0) return n;
    
    int l =0;
    int h =n-1;
    
    
    while(l < h)
    {
        int mid = (l+h)/2;
        if(arr[mid] == 0)
        {
            h = mid;
        }
        else
        { 
            l = mid+1;
        }
    }
    return n-h;
}

