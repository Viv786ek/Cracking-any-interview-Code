string transform(string s)
{
    // code here
    s[0] = int(s[0]) - 32;
    for(int i=1;i<s.size();i++){
        if(s[i] == ' '){
            s[i+1] = int(s[i+1]) - 32;
        }
    }
    return s;
}
