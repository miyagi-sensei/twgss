// fails when input is: 35.68 5 100
#include <bits/stdc++.h>
using namespace std;
int main() {
		double n, z;
		int x, y;
		char c1;
		cin >> n >> x >> y;
		// cout << fixed << setprecision(2) << "n : " << n << endl << "x : " << x << endl << "y : " << y << endl << endl;
		cout << fixed << setprecision(2);
		double m = n;
		z = n;
		for (int i = 0; i < y; i++){
		//    cout << z << endl;
				m = z * (double)x / 100;
				m = round(m * 100.0) / 100.0;
				if (m > z * (double)x / 100){
						m = m - 0.01;
				}
		//    cout << m << " ";
				z = z - m;;
		}
		cout << z;
		//cout << n * pow((double)(100-x)/100 , y);
}
