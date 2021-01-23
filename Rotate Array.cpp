#include <bits/stdc++.h>
using namespace std;

/*Fuction to get gcd of a and b*/
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
  
    else
        return gcd(b, a % b); 
} 
  
/*Function to left rotate arr[] of siz n by d*/
void leftRotate(long long  arr[], long long  d, long long n) 
{ 
    /* To handle if d >= n */
    d = d % n; 
    int g_c_d = gcd(d, n); 
    for (int i = 0; i < g_c_d; i++) { 
        /* move i-th values of blocks */
        int temp = arr[i]; 
        int j = i; 
  
        while (1) { 
            int k = j + d; 
            if (k >= n) 
                k = k - n; 
  
            if (k == i) 
                break; 
  
            arr[j] = arr[k]; 
            j = k; 
        } 
        arr[j] = temp; 
    } 
} 
  
// Function to print an array 
void printArray(long long arr[], long long  size) 
{ 
    for (int i = 0; i < size; i++) 
        cout << arr[i] << " "; 
} 
  

int main() {
	//code
	int tc;cin>>tc;
	while(tc--)
	{
	    long long n,d;cin>>n>>d;
	    long long  arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    leftRotate(arr, d, n); 
        printArray(arr, n); 
	    cout<<"\n";
	}
	
	return 0;
}
