class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        int i, j;
   //Traversing over the array.
   for (i = 0; i < n-1; i++)      
    {
        //Last i elements are already in place so we do not include them.
         for(j=0;j<n-i-1;j++)

            //Swapping, if the element at current index is greater 
            // than the next element. 
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
    }
    }
};
