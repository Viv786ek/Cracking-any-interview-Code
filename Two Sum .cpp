void printPairs(int arr[], int arr_size, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < arr_size; i++) 
    {
        int temp = sum - arr[i];

        if (s.find(temp) != s.end())
            cout << "Pair with given sum "
                 << sum << " is (" << arr[i] << "," 
                    << temp << ")" << endl;

        s.insert(arr[i]);
    }
}





//2nd
class Solution
{
    public:
    bool keypair(vector<int> A, int N, int X)
    {
        // Your code goes here
        sort(A.begin(),A.end());
        int l=0,j=N-1;
        int f=0;
        while(l<j){
            if(A[l]+A[j] == X){
                f=1;
                break;
        }
            else if(A[l]+A[j] >X){
                j--;
            }
            else{
                l++;
            }
        }
        if(f==0)
            return false;
        return true;
    }
};
