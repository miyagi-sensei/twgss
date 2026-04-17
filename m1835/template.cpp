#include <iostream>
using namespace std;

int main() {
    int hh, mm, ss;
    char ch;
    cin >> hh >> ch >> mm >> ch >> ss;
    hh %= 12;
	printf("hh=%d mm=%d, ans=%d\n", hh, mm, hh*2);
	return 0;
}