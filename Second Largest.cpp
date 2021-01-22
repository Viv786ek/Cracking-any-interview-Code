class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int largest = INT_MIN , secondLargest = INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(largest < arr[i]){
	            secondLargest = largest;
	            largest = arr[i];
	        }
	        else if(largest > arr[i] && secondLargest < arr[i]){
	            secondLargest = arr[i];
	        }
	        
	    }
	    if (secondLargest > 0)
	        return secondLargest;
	    return -1;
	    
	}
};
