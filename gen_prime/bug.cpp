#include <iostream>
using namespace std;

bool is_prime(int n) {
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int i, N;
	cin >> N;
	for (i = 2; i <= N; i++) {
		if (is_prime(i)) {
			cout << i << endl;
		}
	}
	return 0;
}
