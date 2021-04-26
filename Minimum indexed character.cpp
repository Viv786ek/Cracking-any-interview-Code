class Solution
{
    public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int n=str.size();
        set<char>s;
        for(int i=0;i<patt.size();i++){
            s.insert(patt[i]);
        }
        int res=-1;
        for(int i=0;i<n;i++){
            if(s.find(str[i]) != s.end()){
                res=i;
                break;
            }
        }
        return res;
    }
};
