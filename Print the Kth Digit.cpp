#include<iostream>

using namespace std;
#include<math.h>

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
 
 int a,b,k;
 cin>>a>>b>>k;;
 long int c;
 c=pow(a, b);
 int i,digit;
 for(i=0; i<k; i++)
 {
  digit=c%10;
  c=c/10;
 }
 cout<<digit<<endl;
}
return 0;
}
