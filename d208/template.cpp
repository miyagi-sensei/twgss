// this guide only finds the largest number in N
#include <iostream>
using namespace std;

int N, A[10];

int main() {
	int i;
	cin >> N;
	for (i=0; i<N; i++) {
		cin >> A[i];
	}
	int maxNum = A[0];
	
	for (i=1; i<N; i++) {
		if (A[i] > maxNum)
			maxNum = A[i];
	}

	cout << maxNum << endl;
	return 0;
}