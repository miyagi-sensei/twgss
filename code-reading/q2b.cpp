#include <iostream>
using namespace std;

int a[4] = {2, 3, 4, 2};

void recur(int i) {
	if (i == 4) {
			cout << "IOI";
			return;
	}
	for (int j=0; j<a[i]; j++)
			recur(i+1);
}
int main() {
	recur(0);
}
