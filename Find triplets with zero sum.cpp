class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++){
            int l=i+1,h=n-1;
            while(l<h){
                int sum = arr[i]+arr[l]+arr[h];
                if(sum ==0) return true;
                else if(sum>0)h--;
                else l++;
            }
        }
        return false;
    }
};
