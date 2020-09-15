
vector<int> duplicates(int a[], int n) {
    // code here
    vector<int>v;
int hash[100000]={0};
for(int i=0;i<n;i++)
{
    hash[a[i]]++;
    
}
for(int i=0;i<100000;i++)
{
    if(hash[i]>1)
{
v.push_back(i);
}

}
if(v.size()==0)
v.push_back(-1);

return v;
 
}
    


