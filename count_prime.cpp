#include <iostream>
using namespace std;

bool is_prime(int num) {
	for (int i = 2; i*i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
  int i, N, count = 0;
  cin >> N;
	for (i = 2; i<=N; i++) {
		if (is_prime(i)) {
			cout << i << endl;
		}
	}
	return 0;
}
