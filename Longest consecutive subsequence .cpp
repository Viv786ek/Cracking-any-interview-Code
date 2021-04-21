
 //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
//using a Set to store elements.
        unordered_set<int> S;
        int ans = 0;
 
        //inserting all the array elements in Set.
        for (int i = 0; i < n; i++)
           S.insert(arr[i]);
 
        //checking each possible sequence from the start.
        for (int i = 0; i < n; i++)
        {
           //if current element is starting element of a sequence then only 
           //we try to find out the length of sequence.
           if (S.find(arr[i] - 1) == S.end())
           {
               
                int j = arr[i];
                //then we keep checking whether the next consecutive elements
                //are present in Set and we keep incrementing the counter.
                while (S.find(j) != S.end())
                j++;
 
            //storing the maximum count.
            ans = max(ans, j - arr[i]);
            }
        }
        //returning the length of longest subsequence
        return ans;
    }
