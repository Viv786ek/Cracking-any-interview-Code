
char *encode(char *src)
{     
  //Your code here 
  int rLen;
  char count[100001];
  int len = strlen(src);
 
  char *dest = (char *)malloc(sizeof(char)*(len*2 + 1));
  
  int i, j = 0, k;
 
 
  for(i = 0; i < len; i++)
  {
 
    
    dest[j++] = src[i];
     
    
    rLen = 1;     
    while(i + 1 < len && src[i] == src[i+1])
    {
      rLen++;
      i++;
    }   
     
    
    sprintf(count, "%d", rLen);


    for(k = 0; *(count+k); k++, j++)
    { 
      dest[j] = count[k]; 
    } 
  }  
 

  dest[j] = '\0';
  return dest;
  /*int count=1;
  string s="";
  char j=src[0];
  for(int i=1;i<strlen(src);i++){
      if(src[i] != j){
          s += j;
          s += to_string(count);
          j=src[i];
          count =1;
      }
      else{
          count++;
      }
  }
  s += j;
  s += to_string(count);
  
  int len = s.size();
  char *c = new char(len+1);
  for(int i=0;i<len;i++){
    c[i] = s[i];
  }
  c[len] = '\0';
  return c;*/
}     
