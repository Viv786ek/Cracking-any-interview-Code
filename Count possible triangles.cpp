#include <bits/stdc++.h>
using namespace std;

int maxTri(int a[],int n)
{
    sort(a,a+n);
    int pp=0;
   
   for(int i=n-1;i>=1;i--)
   {
       int l=0,r=i-1;
       
       while(l<r)
       {
           if(a[l]+a[r]>a[i])
           {
           pp+=r-l;
           r--;
           }
           
            else l++;
       }
       
      
   }
   
   return pp;
}

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int pp=maxTri(a,n);
	    
	    cout<<pp<<endl;
	    
	    
	}
	return 0;
}
