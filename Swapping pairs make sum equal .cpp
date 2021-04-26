class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        if(n>m){
            swap(A,B);
            swap(n,m);
        }
        int sum1=0,sum2=0;
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(A[i]);
            sum1 += A[i];
        }
        for(int i=0;i<m;i++){
            sum2 += B[i];
        }
        if((sum1 -sum2)%2 != 0)//diff is odd
            return -1;
        int sum = (sum1-sum2)/2;
        for(int i=0;i<m;i++){
            if(s.find(B[i]+sum) != s.end())
                return 1;
        }
        return -1;
	}
 

};
