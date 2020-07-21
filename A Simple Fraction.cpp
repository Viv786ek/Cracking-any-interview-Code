#include<iostream>
#include<unordered_map>
using namespace std;


int main()
 {
	//code
	int t;cin>>t;
	while(t--){
	    int a,b;//,c;
	    cin>>a>>b;
        unordered_map <int,int> mp;
        string res="";
        int rem = a%b; 
     if(rem==0)cout<<a/b;
    else{
        while ( (rem!=0) && (mp.find(rem) == mp.end()) ) 
	{ 
		mp[rem] = res.length(); 
    	rem = rem*10; 
    	int res_part = rem / b; 
		res += to_string(res_part); 
    	rem = rem % b; 
	} 

      if(rem!=0)cout<<a/b<<"."<<res.substr(0,mp[rem])<<"("<<res.substr(mp[rem])<<")";
      else cout<<a/b<<"."<<res.substr(mp[rem]);
}
	    cout<<endl;
	}	
	return 0;

}
