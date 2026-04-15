#include <iostream>
using namespace std;

int a[9], b[9];
int i;
int main() {
	for (i=0; i<9; i++) {
		a[i] = 0;
		b[i] = 0;
	}
	for (i=1; i<9; i++) {
		cin >> a[i];
		b[i] = b[i-1] + a[i];
	}
	// make a and b equal to each other
	for (i=8; i>=0; i--)
		b[i] = b[i] - b[i-1];

	// print a and b to check their contents
	cout << "a: ";
	for (i=0; i<9; i++)
		cout << a[i] << " ";
	cout << endl << "b: ";
	for (i=0; i<9; i++)
		cout << b[i] << " ";
	cout << endl;
	return 0;
}
