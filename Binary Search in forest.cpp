class Solution{
    public:
    int wood_collected(int tree[], int n, int h)
    {
        int ret=0;
        
        // counting the amount of wood that gets collected
        // if we cut trees at height h
        for( int i=0; i<n; i++ )
            if( tree[i] > h )
                ret += tree[i] - h;
    
        return ret;
    }
    
    int find_height(int tree[], int n, int k)
    {
        // l is lower limit of binary search
        // h is upper limit
        int l=0, h=0;
        for(int i=0; i<n; i++)
            h = max(h, tree[i]);
    
        while(l<=h)
        {
            int mid = (l+h)/2;
            int val = wood_collected(tree,n,mid);
            
            if(val==k) return mid;
            
            if(val>k) l = mid+1;
            // if wood collected is too much, we increase lower limit
            else h = mid-1;
            // if wood collected is too less, we decrease uppwer limit
        }
        return -1;
    }
};
