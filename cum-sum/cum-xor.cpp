#include <iostream>
using namespace std;

int f(int n) {
	if (n == 1)
			return 1;
	else
			return n ^ f(n-1);
}

// alternative way to implement cum-xor: stop within 4 recursive calls
// int f(int n) {
// 	if (n % 4 == 2)
// 			return ______E______;
// 	else
// 			return ______F______;
// }

int g(int n) {
	int i, sum;
	sum = 0;
	for (i=1; i <= n; i++)
			sum = sum ^ i;
	return sum;
}


int main() {
	cout << g(10) << endl;
	cout << f(10) << endl;
	return 0;
}