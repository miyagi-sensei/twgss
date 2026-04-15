#include <iostream>
using namespace std;

int main() {
	double a, b, c;
	a = 0.4;
	b = 0.3;
	cout << (a - b) * 20 << endl;       // 2
	c = 2.0;
	cout << ((a-b) * 20 == c) << endl;  // 0
	printf("%0.20lf\n", (a-b) * 20);    // 2.00000000000000088818
	printf("%0.20lf\n", c);             // 2.00000000000000000000          
	printf("%0.20lf\n", c - (a-b) * 20);// -0.00000000000000066613
	return 0;
}