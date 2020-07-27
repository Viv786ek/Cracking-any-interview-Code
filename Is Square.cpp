#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll i,j,t,x1,y1,x2,y2,x3,y3,x4,y4;
set<ll>s;
cin>>t;
while(t--)
{
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
s.insert(x1);
s.insert(x2);
s.insert(x3);
s.insert(x4);
if(s.size()==2)
cout<<"Yes"<<endl;
else cout<<"No"<<endl;
s.clear();
}
return 0;
}
