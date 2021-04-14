 int findCandidate(int a[], int size) 
    { 
        int maj_index = 0, count = 1; 
        
        // use linear search to compute candidate for majority element
        for (int i = 1; i < size; i++) 
        { 
            
            if (a[maj_index] == a[i]) 
                count++; 
            else
                count--; 
            if (count == 0) 
            { 
                maj_index = i; 
                count = 1; 
            } 
        } 
        return a[maj_index]; 
    }
    
    
    /* Function to check if the candidate 
       occurs more than n/2 times */
    bool isMajority(int a[], int size, int cand) 
    { 
        int count = 0; 
        for (int i = 0; i < size; i++) 
            if (a[i] == cand) 
                count++; 
              
        if (count > size/2) 
            return 1; 
          
        else
            return 0; 
    } 
    
    
    /* Function to print Majority Element */
    int majorityElement(int a[], int size)
    {
        /* Find the candidate for Majority*/
       int cand = findCandidate(a, size); 
      
       /* Print the candidate if it is Majority*/
        if (isMajority(a, size, cand)) 
            return cand;
        else
            return -1;
    }

















sort(arr, arr+n);
    
    int count = 1, max_ele = -1, temp = arr[0], ele, f=0;
    
    for(int i=1;i<n;i++)
    {
        // increases the count if the same element occurs
        // otherwise starts counting new element
        if(temp==arr[i])
        {
            count++;
        }
        else
        {
            count = 1;
            temp = arr[i];
        }
        
        // sets maximum count
        // and stores maximum occured element so far
        // if maximum count becomes greater than n/2
        // it breaks out setting the flag
        if(max_ele<count)
        {
            max_ele = count;
            ele = arr[i];
            
            if(max_ele>(n/2))
            {
                f = 1;
                break;
            }
        }
    }
    
    // returns maximum occured element
    // if there is no such element, returns -1
    return (f==1 ? ele : -1);
