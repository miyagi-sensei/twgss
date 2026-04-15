#include <iostream>
using namespace std;

int Nums[100000];
int N, Q;

int main() {
		int i, target;
		cin >> N >> Q;
		for (i=0; i<N; i++)
				cin >> Nums[i];
		while (Q--) {
				cin >> target;
				for (i=0; i<N; i++)
						if (Nums[i] == target)
								break;                

				if (i==N)
						cout << "No" << endl;
				else
						cout << "Yes" << endl;
		}
		return 0;
}