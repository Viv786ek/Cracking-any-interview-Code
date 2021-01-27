
class Solution {
private:
public:
//Method 1
	int minSwaps(vector<int>&nums){
	    // Code here
	    int N = nums.size();
	    pair<int, int> arrPos[N]; 
    for (int i = 0; i < N; i++) 
    { 
        arrPos[i].first = nums[i]; 
        arrPos[i].second = i; 
    }
    
    sort(arrPos, arrPos + N); 
    
    vector<bool> visited(N, false); 
    
    int ans = 0;
    
    for(int i = 0; i < N; i++)
    {
        if (visited[i] == true || arrPos[i].second == i) 
        {
            continue;
        }
        
        int cycle_size = 0; 
        int j = i; 
        
        while (!visited[j]) 
        { 
            visited[j] = 1; 
            
            j = arrPos[j].second; 
            cycle_size++; 
        } 
        
        if (cycle_size > 0) 
        { 
            ans += (cycle_size - 1); 
        } 
    }
    
    return ans;
}
//Method 2
	/*
	
void swap(vector<int> &arr,
          int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
// Return the minimum number
// of swaps required to sort 
// the array
int minSwaps(vector<int>arr, 
             int N)
{
  int ans = 0;
  vector<int>temp = arr;
 
  // Hashmap which stores the
  // indexes of the input array
  map <int, int> h;
 
  sort(temp.begin(), temp.end());
  for (int i = 0; i < N; i++) 
  {
    h[arr[i]] = i;
  }
  for (int i = 0; i < N; i++) 
  {
    // This is checking whether
    // the current element is
    // at the right place or not
    if (arr[i] != temp[i]) 
    {
      ans++;
      int init = arr[i];
 
      // If not, swap this element
      // with the index of the
      // element which should come here
      swap(arr, i, h[temp[i]]);
 
      // Update the indexes in
      // the hashmap accordingly
      h[init] = h[temp[i]];
      h[temp[i]] = i;
    }
  }
  return ans;
}
*/
};
