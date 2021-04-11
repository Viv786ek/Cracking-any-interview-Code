
class Solution{
    public:
    // Function to find the subarray with given sum k
    // arr: input array
    // n: size of array
    vector<int> subarraySum(int arr[], int n, int s){
        
        // Your code here
        int sum =arr[0];
        int l=0,h=0;
        while((l<n)&&(h<n)){
            if(sum == s){
                return {l+1,h+1};
            }
            else if(sum < s){
                h++;
                sum += arr[h];
            }
            else if(sum>s){
                sum -= arr[l];
                l++;
            }
        }
        return {-1};
    }
};
