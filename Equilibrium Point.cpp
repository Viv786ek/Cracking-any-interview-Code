class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
        if(n==1)
        {
            return 1;
        }
        int sum=0,s=0;
        for(int i=0;i<n;i++)s += arr[i];
        for(int i=0;i<n;i++)
        {
            if(sum == (s - arr[i])*0.5)return i+1;
            if(sum > (s- arr[i])*0.5) return -1;
            sum += arr[i];
        }
    }

};
