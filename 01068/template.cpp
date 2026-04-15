#include <iostream>
using namespace std;
// there is an integer overflow problem you need to fix here!

int N;
pair<int, int> A[100];

int moliu_index(pair<int, int> p) {
		return p.first * p.first + p.second * p.second;
}

void mysort() {
		int i, j;
		for (i=1; i<N; i++)
				for (j=1; j<N; j++)
						if (moliu_index(A[j-1]) > moliu_index(A[j]))
								swap(A[j-1], A[j]);
}

int main()
{
		int i, x, y;
		cin >> N;
		for (i=0; i<N; i++) {
				cin >> x >> y;
				A[i] = {x, y};
		}
		mysort();
		for (i=0; i<N; i++) {
				cout << A[i].first << " " << A[i].second << endl;
		}
		return 0;
}

