
string firstRepChar(string s)
{
    //code here.
    string str="";
    int h[26] ={0};
    for(int i=0;i<s.size();i++){
        if(h[s[i]-'a'] >=1){
            str += s[i];
            return str;
        }
        else{
            h[s[i]-'a']++;
        }
    }
    return "-1";
}
