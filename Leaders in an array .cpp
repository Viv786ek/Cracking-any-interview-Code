vector<int> leaders(int a[], int n){
        // Code here
        vector<int>v;
        int m=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(a[i] >=m){
                m=a[i];
                v.push_back(a[i]);
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
