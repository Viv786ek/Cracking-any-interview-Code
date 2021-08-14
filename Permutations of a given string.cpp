vector<string>find_permutation(string str)
		{
		    // Code here there
		     sort(str.begin(), str.end());
        
        vector<string> res;
        
        do
        {
            res.push_back(str);
        }
        while(next_permutation(str.begin(), str.end()));
        
        return res;
    }
