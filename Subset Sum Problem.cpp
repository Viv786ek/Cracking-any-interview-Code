bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        bitset<10000>b;
        b[0] = 1;
        // sort(arr, arr+N);
        for(int i =0;i<N;i++)
        b|=(b<<arr[i]);
      
        
        return b[sum]==1;
    }
