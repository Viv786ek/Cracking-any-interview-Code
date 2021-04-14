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
