int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        int max = arr[0], ind = 0;
        for (int j=1; j<=i; j++)
        {
            if (arr[j] > max)
            {
               ind = j;
               max = arr[j];
            }
        }
        return ind;
    }
 
    void selectionSort(int arr[], int n)
    {
       int i, j;
       for (i = n-1; i >=0; i--)      
       {
            int j = select(arr, i);
            swap(&arr[i], &arr[j]);
       }
    }
