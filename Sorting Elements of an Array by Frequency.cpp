#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 unordered_map <int,int> cnt;
 

	       bool cmp(int x,int y){
	        if (cnt[x]>cnt[y]){
	            return true;
	        }
	        else if(cnt[x]==cnt[y] && x<y){
	            return true;
	        }
	        else{
	            return false;
	        }
	        
	    }
int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    cnt.clear();
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        cnt[a[i]]++;
	    }
	   
	 
	    sort(a,a+n,cmp);
	    
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
