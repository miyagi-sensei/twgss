#include <iostream>
using namespace std;

int main() {
		double a = 1.2;
		int b = a * 100;  // on a PC, this cast an internal 80-bit float to int
		cout << b << endl; // 120 on Linux and 119 on PC

		a = 1.2 * 100;
		b = a;
		cout << b << endl; // 120 on both PC and Linux

		return 0;
}