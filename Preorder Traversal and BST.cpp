class Solution {
  public:
    int canRepresentBST(int arr[], int N) {
        // code here
        int root=arr[0],ans=1,i=1;
      while(root>=arr[i++]);
      while(i<N)
      {
          if(arr[i]<root)
          {
              ans=0;
              break;
          }
          i++;
      }
      return ans;
        
    }
};
