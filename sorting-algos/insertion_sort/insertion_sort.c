/*
	Insertion sort
*/
#include<stdio.h>

void insertion_sort(int* arr, int n);

int main()
{
	int n, i;
	printf("Enter the number of elements\n");
	scanf("%d", &n);
	
	int arr[n]; // Declaring an array of size 'n'
	printf("Enter the elements\n");
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]); // Reading the elements into the array
	}
	
	insertion_sort(arr, n); // function call
	
	printf("After insertion sort\n");
	
	for(i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]); // Sorted array is printed
	}
	return 0;
}

void insertion_sort(int* arr, int n)
{
	// After 'i' iterations, the first 'i' elements will be sorted
	
	int i, value, hole;
	
	// Start of core algorithm------
	for(i = 1; i < n; i++)
	{
		value = arr[i]; // The i'th value, which is compared with the values of i-1 elements
		hole = i;
		while(hole >= 0 && arr[hole - 1] > value)
		{
			arr[hole] = arr[hole - 1]; // Replace the hole, if an element lower than the i'th value is found with the value of 'i - 1'th element
			hole -= 1; // Decrement hole to successively compare the previous elements of the hole
		}
		arr[hole] = value; // Place the i'th value in appropriate position
	}
	// ------ End of core algorithm
}
