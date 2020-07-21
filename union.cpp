#include <bits/stdc++.h>
using namespace std;

int printUnion(int a[], int b[], int m, int n)
{
    sort(a,a+m);
    sort(b,b+n);
    int i=0,j=0,count=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j]){ count++;i++;}
        else if(a[i]>b[j]) {count++;j++;}
        else {count++;i++;j++;}
    }
    
    while(i<m) count++;i++;
    while(j<n) count++;j++;
    
    return count;
}
int main() {
	int tc;cin>>tc;
	while(tc--)
	{
	    int m,n;cin>>m>>n;
	    int a[m],b[n];
	    
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    cout<<printUnion(a,b,m,n);
	    cout<<"\n";
	}
	return 0;
}
