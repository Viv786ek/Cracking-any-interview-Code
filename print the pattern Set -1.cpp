for(int i=0;i<n;i++)
{ 
  for(int j=n;j>0;j--)
  {
    int k=n-i;
    while(k--)
      cout << j << " ";
  }
  cout << '$';
}
