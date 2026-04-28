/*
1. find the index of the largest element first
2. then go through the list again to find the second largest element, by explictly ignoring the largest element found
*/
#include <iostream>
using namespace std;

int N, A[10];

int main() {
	int i;
	cin >> N;
	for (i=0; i<N; i++)
		cin >> A[i];
	int max_index = 0;
	
	// find the index of the largest element
	for (i=1; i<N; i++) {
		if (A[i] > A[max_index])
			max_index = i;
	}

	// go through all the numbers except for A[max_index] and find the largest of them
	int second_largest = -2147483648;
	for (i=0; i<N; i++) {
		if (i == max_index)
			continue;
		second_largest = max(second_largest, A[i]);
	}
	cout << A[max_index] << endl << second_largest << endl;
	return 0;
}