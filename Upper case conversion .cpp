string transform(string s)
{
for(int i = 0;i < s.length();i++){
if(s[i] == ' '){
s[i+1] = s[i+1] -'a' + 'A';
}
}
s[0] = s[0] - 'a' +'A';
return s;
}




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
