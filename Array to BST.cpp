void sbst(vector<int>& nums,vector<int>& v,int start,int end,int &i)
{
    if(start <= end)
    {
    
        int mid = start +(end-start)/2;
        v[i++]=nums[mid];
        sbst(nums,v,start,mid-1,i);
        sbst(nums,v,mid+1,end,i);
    }
        
}
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        int n=nums.size();
        vector<int>v(n,0);
        int i=0;
        sbst(nums,v,0,n-1,i);
        return v;
    }
