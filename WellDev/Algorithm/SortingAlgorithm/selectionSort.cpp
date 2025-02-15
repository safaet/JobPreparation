#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp) {
	int temp = *xp;

	*xp = *yp;
	*yp = temp;
}


void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for(i = 0; i<n-1; i++)
	{
		min_idx = i;
		for(j = i+1; j<n; j++)
			if(arr[j] < arr[min_idx])
				min_idx = j;
			if(min_idx != i)
				swap(&arr[min_idx], &arr[i]);
	}
}

void printArray(int arr[], int size){
	int i;

	for(i = 0; i<size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE

		freopen("input.txt", "r", stdin);

		freopen("output.txt", "w", stdout);

	#endif
		
	int arr[99999], n;

	cin>>n;

	for(int i = 0; i<n; i++)
		cin>>arr[i];

	selectionSort(arr, n);
	cout<< "Sorted array: \n";
	printArray(arr, n);
	return 0;
}