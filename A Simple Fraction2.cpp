string fractionToDecimal(int num, int den) {
	    
	    string ans=to_string(num/den);
	    int que=0;
	    int rem=0;
	    map<int,int>mp;
	    
	    if(num%den==0)
	    {
	        return ans;
	    }
	    else{
	       
	        ans+=".";
	        rem = num%den;
	       while(rem!=0)
	       {
	           if(mp.find(rem)!=mp.end())
	           {
	             int len = mp[rem];
	             ans.insert(len,"(");
	             ans+=")";
	             break;
	           }
	           else{
	               mp[rem] = ans.length();
	               rem = rem*10;
	               que = rem/den;
	               ans = ans+to_string(que);
	               rem=rem%den;
	           }
	       }
	    }
	   return ans;
	}
