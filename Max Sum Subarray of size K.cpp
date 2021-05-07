int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int s=0,ans = INT_MIN;
        for(int i=0;i<K;i++){
            s += Arr[i];
        }
        ans = max(ans,s);
        
        for(int i=1;i<N-K+1;i++){
            s -= Arr[i-1];
            s += Arr[i+K-1];
            ans = max(ans,s);
        }
        return ans;
    }
