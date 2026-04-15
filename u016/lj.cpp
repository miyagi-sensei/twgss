#include <bits/stdc++.h>
using namespace std;
int main() {
		long double x, a, b;
		long long v, e;
		cin >> x >> a >> b;
		v = x*100;
		for (int i = 0; i < b; i++){
			e = v*(a/100);
			v -= e;
		}
		cout << fixed << setprecision(2)  << (double) v / 100 << endl;
		return 0;
}