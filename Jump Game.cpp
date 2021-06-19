int canReach(int A[], int N) {
        // code here
        int i, count=A[0];
        for(i=1;i<N;i++){
            if(count<1)
                return 0;
            if(A[i]>=count)
                count=A[i];
            else
                count--;
        }
        if(i==N)
            return 1;
            
        return 0;
    }
