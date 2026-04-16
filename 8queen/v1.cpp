#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> Config;
bool Diag0[200], Diag1[200];
int N;
bool check() {
	int i, j;
	for (i=0; i<2*N + 1; i++) {
		Diag0[i] = false;
		Diag1[i] = false;
	}
	for (i=0; i<N; i++) {
		int d0 = i + Config[i];
		int d1 = i - Config[i] + N;
		
		if (Diag0[d0] || Diag1[d1])
			return false;
		Diag0[d0] = true;
		Diag1[d1] = true;
	}
	return true;
}

int main() {
	int i, j;
	int count = 0;
	cin >> N;
	for (i = 0; i<N; i++)
		Config.push_back(i);
	while (next_permutation(Config.begin(), Config.end())) {			
		if (check())
			count++;
		// for (auto x: Config)
		// 	cout << x << " ";
		// cout << endl;
	}
	cout << count << endl;
	return 0;
}