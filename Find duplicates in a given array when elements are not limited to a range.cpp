
#include <bits/stdc++.h>
using namespace std;

// function to find and print duplicates
void printDuplicates(int arr[], int n)
{
	// unordered_map to store frequencies
	unordered_map<int, int> freq;
	for (int i=0; i<n; i++)
		freq[arr[i]]++;

	bool dup = false;
	unordered_map<int, int>:: iterator itr;
	for (itr=freq.begin(); itr!=freq.end(); itr++)
	{
		// if frequency is more than 1
		// print the element
		if (itr->second > 1)
		{
			cout << itr->first << " ";
			dup = true;
		}
	}

	// no duplicates present
	if (dup == false)
		cout << "-1";
}

// Driver program to test above
int main()
{
	int arr[] = {12, 11, 40, 12, 5, 6, 5, 12, 11};
	int n = sizeof(arr) / sizeof(arr[0]);
	printDuplicates(arr, n);
	return 0;
}
