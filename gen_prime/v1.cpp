#include <iostream>
using namespace std;

bool is_prime(int x) {
	for (int i=2; i*i<=x; i++)
		if (x % i == 0)
			return false;
	return true;
}

int main() {
	int i, N;
	int count = 0;
	cin >> N;
	for (i=2; i<=N; i++)
		if (is_prime(i))
			count++;
			// cout << i << endl;
	cout << count << endl;
	return 0;
}
