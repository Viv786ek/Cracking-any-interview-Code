class Solution {
  public:
    vector<int> increment(vector<int> a ,int n) {
        // code here
    a[n-1] += 1;
    int carry = a[n-1]/10;
    a[n-1] = a[n-1] % 10;
  
    // Traverse from second last digit
    for (int i=n-2; i>=0; i--)
    {
        if (carry == 1)
        {
           a[i] += 1;
           carry = a[i]/10;
           a[i] = a[i] % 10;
        }
    }
  
    // If carry is 1, we need to add
    // a 1 at the beginning of vector
    if (carry == 1)
      a.insert(a.begin(), 1);
        
    return a;
    }
};
