#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	int tc;cin>>tc;
	while(tc--)
	{
	    int n;cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    reverse(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
