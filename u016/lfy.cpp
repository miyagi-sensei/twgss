#include <bits/stdc++.h>
using namespace std;

int main() {
		int dollars,cents;
		int a,b;
		char dot;
		cin >> dollars >> dot >> cents >> a >> b;
		long long total = dollars * 100 + cents;
		for (int i = 0; i < b; i++) {
				long long d = total * a / 100;
				total-= d;
		}
		cout << total / 100.0 << endl;
	return 0;
		int e = total / 100;
		int f = total % 100;
		cout << e << "." 
				 << setw(2) << setfill('0') << f << endl;

		return 0;
}