#include <bits/stdc++.h>
using namespace std;
#define ll long long
const unsigned int mod=1000000007;
//#define mod pow(10,9)+7

ll gcd(ll a, ll b){
if(b==0){
return a;
}
return gcd(b,a%b);
}

ll gcd_func(ll arr[], ll n)
{
ll r = arr[0];
for(ll i = 1; i<n;i++)
{
    r=gcd(arr[i], r);
    }
return r ;
    
} 

int main() {
ll t; 
cin>>t;
while(t--)
{
ll n;cin>>n;
ll arr[n],res=1;
for(ll i=0;i<n;i++)
{ 
    cin>>arr[i];
}

//cout<<res;
ll a=gcd_func(arr, n);
for(ll i=0;i<n;i++)
{
    res=(res*arr[i])%mod;
    
}
    ll ans=1; 
    while(a--)
    {
        ans=(ans*res)%mod;
        
    }
    cout<<ans<<endl; 
    
}
return 0;
}


