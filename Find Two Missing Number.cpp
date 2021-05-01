// C++ Program to find 2 Missing Numbers using O(1)
// extra space and no overflow.
#include<bits/stdc++.h>

// Function to find two missing numbers in range
// [1, n]. This function assumes that size of array
// is n-2 and all array elements are distinct
void findTwoMissingNumbers(int arr[], int n)
{
	/* Get the XOR of all elements in arr[] and
	{1, 2 .. n} */
	int XOR = arr[0];
	for (int i = 1; i < n-2; i++)
		XOR ^= arr[i];
	for (int i = 1; i <= n; i++)
		XOR ^= i;

	// Now XOR has XOR of two missing elements. Any set
	// bit in it must be set in one missing and unset in
	// other missing number

	// Get a set bit of XOR (We get the rightmost set bit)
	int set_bit_no = XOR & ~(XOR-1);

	// Now divide elements in two sets by comparing rightmost
	// set bit of XOR with bit at same position in each element.
	int x = 0, y = 0; // Initialize missing numbers
	for (int i = 0; i < n-2; i++)
	{
		if (arr[i] & set_bit_no)
			x = x ^ arr[i]; /*XOR of first set in arr[] */
		else
			y = y ^ arr[i]; /*XOR of second set in arr[] */
	}
	for (int i = 1; i <= n; i++)
	{
		if (i & set_bit_no)
			x = x ^ i; /* XOR of first set in arr[] and
						{1, 2, ...n }*/
		else
			y = y ^ i; /* XOR of second set in arr[] and
						{1, 2, ...n } */
	}

	printf("Two Missing Numbers are\n %d %d", x, y);
}

// Driver program to test above function
int main()
{
	int arr[] = {1, 3, 5, 6};

	// Range of numbers is 2 plus size of array
	int n = 2 + sizeof(arr)/sizeof(arr[0]);

	findTwoMissingNumbers(arr, n);

	return 0;
}
