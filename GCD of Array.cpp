#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    return b;
    
    return gcd(b%a,a);
}

int findGCD(int a[],int n)
{
    int res = a[0];
    for(int i=0;i<n;i++)
    {
        res = gcd(a[i],res);
        
        if(res ==1)
        {
            return 1;
        }
    }
    return res;
}


int main() {
	//code
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cout<<findGCD(a,n)<<"\n";
	}
	return 0;
}
