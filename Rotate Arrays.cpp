class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k %= n;
        reverse(nums,0,n - 1);
        reverse(nums,0,k-1);
        reverse(nums,k,n - 1);
    }
    public: 
        void reverse(vector<int>& num,int start , int end){
            while(start < end){
                int temp = num[start];
                num[start] = num[end];
                num[end] = temp;
                start ++;
                end--;
            }
        }
};
