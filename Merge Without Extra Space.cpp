void merge(int arr1[], int arr2[], int n, int m) 
{ 
    int x=n-1, y = 0;
while(x>=0 && y<m){ if(arr1[x]> arr2[y]){
swap(arr1[x] , arr2[y]);
x--;
y++;
}
else{
x--;
}
}
sort(arr1 , arr1+n);
sort(arr2 , arr2+m);
    
} 
