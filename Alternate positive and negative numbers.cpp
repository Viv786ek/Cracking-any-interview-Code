class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	     vector<int> pos;
	    vector<int> neg;
	    int i,j,k;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i] >= 0)
	          pos.push_back(arr[i]);
	        else
	          neg.push_back(arr[i]);
	    }
	    i=0;
	    j=0;
	    k=0;
	    while(i < pos.size() and j < neg.size())
	    {
	        arr[k++]=pos[i++];
	        arr[k++]=neg[j++];
	    }
	    while(j < neg.size())
	    {
	        arr[k++]=neg[j++];
	    }
	    while(i < pos.size())
	    {
	        arr[k++]=pos[i++];
	    }
	    
	}
};
