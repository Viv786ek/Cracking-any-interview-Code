int maxValue(int arr[], int N) {
        int a[N], b[N]; 
  
        // Calculating first_array and second_array 
        for (int i = 0; i < N; i++) { 
            a[i] = (arr[i] + i); 
            b[i] = (arr[i] - i); 
        } 
      
        int x = a[0], y = a[0]; 
      
        // Finding maximum and minimum value in  
        // first_array 
        for (int i = 0; i < N; i++) { 
            if (a[i] > x) 
                x = a[i]; 
      
            if (a[i] < y) 
                y = a[i]; 
        } 
      
        // Storing the difference between maximum and  
        // minimum value in first_array 
        int ans1 = (x - y); 
      
        x = b[0]; 
        y = b[0]; 
      
        // Finding maximum and minimum value in 
        // second_array 
        for (int i = 0; i < N; i++) { 
            if (b[i] > x) 
                x = b[i]; 
      
            if (b[i] < y) 
                y = b[i]; 
        } 
      
        // Storing the difference between maximum and  
        // minimum value in second_array 
        int ans2 = (x - y); 
      
        return max(ans1, ans2); 
    }
