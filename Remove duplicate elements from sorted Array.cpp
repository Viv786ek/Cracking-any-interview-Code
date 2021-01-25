/*You are required to complete this function */
int remove_duplicate(int A[],int N)
{
//Your code here
//method 1
int fin =0;
		for(int i=1;i<N;++i)
			if(A[i]!=A[fin])
			A[++fin]=A[i];
 return fin+1;
 
//method 2
/*set<int>s(A,A+N);
for(auto i=s.begin();i!=s.end();i++)
cout<<*i<<" ";
return 0;*/

}
