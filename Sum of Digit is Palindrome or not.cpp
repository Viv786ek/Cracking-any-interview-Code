#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int pal(int n){
    int r=0;
    while(n!=0){
        r=(r*10)+(n%10);
        n/=10;
    }
    return r;
}
int main()
 {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(sum(n)==pal(sum(n)))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
