#include <iostream>
using namespace std;

int main() {
		double val_d;
		int r, val, depr, t;
		cin >> val_d >> r >> t;
		val = val_d * 100 + 0.5;
		// val = round(val_d * 100);
		while (t--) {
				depr = val * r / 100;
				val -= depr;
		}
		printf("%.2f\n", val/100.0);
		return 0;
}
