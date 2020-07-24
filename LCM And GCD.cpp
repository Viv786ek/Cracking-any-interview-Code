#include <bits/stdc++.h>
using namespace std;

 long long int gcd(long long int a,long long int b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a); 
 }
 
 long long int lcm(long long int a,long long int b)  
 {  
    return (a*b)/gcd(a, b);  
 }  


int main() {
	//code..
	int tc;cin>>tc;
	while(tc--)
	{
	    long long int A,B;
	    cin>>A>>B;
	    
	    cout<<lcm(A,B)<<" ";
	    cout<<gcd(A,B);
	    cout<<"\n";
	}
	
	return 0;
}
