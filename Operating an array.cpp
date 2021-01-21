/* Complete the function(s) below */
bool searchEle(int a[],int x)
{
    int i = 0;
    while(a[i] != -1)
	if(a[i++] == x) return true;
	return false;
}
bool insertEle(int a[],int y,int yi)
{
    int i = 0;
    while(a[i] != -1)
    if(i++ == yi){ a[i-1] = y; return true;}
    return false;
}
bool deleteEle(int a[],int z)
{
    int i = 0;
    while(a[i] != -1)
	if(a[i++] == z){a[i-1] = -1;}
	return true;
}
