 int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int res=1,platform_needed=1;
    	int i=1,j=0;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        platform_needed++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        platform_needed--;
    	        j++;
    	    }
    	    if(platform_needed > res)
    	        res = platform_needed;
    	}
    	return res;
    }
