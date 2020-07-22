#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;cin>>tc;
	while(tc--)
	{
	    float a,b,n;cin>>a>>b>>n;
	    float r = b/a;
	    float ans = a* pow(r,(n-1));
	    cout<<floor(ans)<<"\n";
	}
	return 0;
}
