#include <iostream>
using namespace std;

int f(int n) {
	if (n == 1)
			return 1;
	else
			return n + f(n-1);
}
int g(int n) {
	int i, sum;
	sum = 0;
	for (i=1; i <= n; i++)
			sum = sum + i;
	return sum;
}

int main() {
	cout << g(5) << endl;
	cout << f(5) << endl;

	return 0;
}