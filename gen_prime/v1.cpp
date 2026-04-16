#include <iostream>
using namespace std;

bool is_prime(int x) {
	for (int i=2; i<x; i++)
		if (x % i == 0)
			return false;
	return true;
}

int main() {
	int i, N;
	cin >> N;
	for (i=2; i<=N; i++)
		if (is_prime(i))
			cout << i << endl;
	return 0;
}
