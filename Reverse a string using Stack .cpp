char* reverse(char *s, int len)
{
    //code here
    stack<char>S;
    //string st="";
    for(int i=0;i<len;i++){
        S.push(s[i]);
    }
    int i=0;
    while(!S.empty()){
        s[i]=S.top();
        S.pop();
        i++;
    }
    return s;
}
