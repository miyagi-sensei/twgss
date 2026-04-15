// full solution using memoization in subtask 4
// assumes Y can be up to 50MM the solution is implemented iteratively
#include <iostream>
using namespace std;

int W2, W4, N4, N6, N9;

int t1(int n) {

}

int t3(int n) {

}


int main() {
	int task;
	cin >> task;
	if (task == 1) {
		int x;
		cin >> W2 >> W4 >> x;
		cout << t1(x) << endl;
	} else if (task == 2) {
		int y;
		cin >> W2 >> W4 >> y;
	} else if (task == 3) {
		int x;
		cin >> N4 >> N6 >> N9 >> x;
		cout << t3(x) << endl;
	} else {

	}
	return 0;
}

