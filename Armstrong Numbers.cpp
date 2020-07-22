

#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int num,temp,sum=0;
cin>>num;
temp=num;
while(num!=0)
{
sum=sum+(num%10)*(num%10)*(num%10);
num=num/10;
}
if(sum==temp)
cout<<"Yes"<<"\n";
else
cout<<"No"<<"\n";
}
return 0;
}
