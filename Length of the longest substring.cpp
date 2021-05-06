int longestUniqueSubsttr(string S){
        //code
        vector<int>v(256,-1);
        int start=-1,maxlen=0;
        for(int i=0;i<S.size();i++){
            if(v[S[i]]>start)
                start=v[S[i]];
            v[S[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        return maxlen;
        
    }
