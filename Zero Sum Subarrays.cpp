ll findSubarray(vector<ll> arr, int n ) {
        //code here
        map<ll,ll>m;
        ll preSum=0;
        for(int i=0;i<n;i++){
            preSum += arr[i];
            m[preSum]++;
        }
        ll ans=0;
        for(auto x: m){
            ll c=x.second;
            ans += (c*(c-1))/2;
            if(x.first==0)
                ans += x.second;
        }
        return ans;
    }
