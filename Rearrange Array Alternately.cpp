
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int max_index = n-1;
    	int min_index = 0;
    	int Max = arr[n-1] +1;
    	for(int i=0;i<n;i++){
    	    if(i%2 == 0){
    	        arr[i] = (arr[max_index] % Max)*Max + arr[i];
    	        max_index--;
    	    }
    	    else{
    	        arr[i] = (arr[min_index] % Max)*Max + arr[i];
    	        min_index++;
    	    }
    	}
    	for(int i=0;i<n;i++){
    	    arr[i] /= Max;
    	}
    	 
    }
};
