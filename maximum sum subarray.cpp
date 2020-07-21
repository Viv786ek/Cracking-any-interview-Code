#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int best = 0,sum=0;
	
	for(int i=0;i<n;i++)
	{
		sum = max(array[i],sum +array[i]);
		best = max (best,sum);
	}
	cout<< best <<"\n";
	  
	return 0;
}
/*int currSum=0;
    int maxSum=INT_MIN;
        for(int i=0;i<vec.size();i++)
        {
            currSum+=vec[i];
            maxSum=max(currSum,maxSum);
            if(currSum<0)
            {
                currSum=0;
            }
        }
        return maxSum; 
*/
        
/*
Initialize:
    max_so_far = 0
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_ending_here < 0)
            max_ending_here = 0
  (c) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
return max_so_far
*/
