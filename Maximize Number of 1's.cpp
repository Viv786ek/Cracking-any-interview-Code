class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int maxCount = 0;
int begin = 0;
int count = 0;
for(int i = 0; i<n;i++){ if(arr[i]==0)count++; while(count>m){
if(arr[begin]==0)count--;
begin++;
}
maxCount = max(maxCount,i-begin+1);
}
return maxCount;
    }  
};
