#include<bits/stdc++.h>
using namespace std;
int main()
 {
	 
    int t;
    cin>>t;
    while(t--)
	{
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
                temp += s[i];
            }
            else{
                reverse(temp.begin(),temp.end());
                cout<<temp<<".";
                temp = "";
            }
        }
        reverse(temp.begin(),temp.end());
        cout<<temp<<endl;
    }
    return 0;
}
