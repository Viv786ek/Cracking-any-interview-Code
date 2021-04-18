1st method
 void frequencycount(vector<int>& arr,int n)
    { 
        // code here
        for(int i=0;i<n;i++) {arr[i] -= 1;}
        for(int i=0;i<n;i++) {arr[arr[i] % n] += n;}
        for(int i=0;i<n;i++){ arr[i] = arr[i]/n;}
    }
    
    2nd method


int hash[n+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[i+1]==0)
        arr[i]=0;
        else
        arr[i]=hash[i+1];
    }
