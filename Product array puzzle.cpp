vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here
    long long int prod = 1;
   vector<long long int> ans(n), suf(n);
   suf[n-1] = 1;
   for (int i = n-2; i >= 0; i--) {
       suf[i] = suf[i+1]*nums[i+1]; 
    }
   for (int i = 0; i < n; i++) {
       ans[i] = prod*suf[i];
       prod*=nums[i];
   }
   return ans;
}
