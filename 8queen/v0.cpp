// solves 8 Queens brute force in just under 1 minute
#include <iostream>
using namespace std;

pair<int, int> Positions[64];
int N = 8;
int N2 = N*N;
bool Col[10], Row[10], Diag0[200], Diag1[200];
int Index[10];

bool check() {
	int i, j;
	for (i=0; i<N; i++) {
		Col[i] = false;
		Row[i] = false;
	}
	for (i=0; i<2*N + 1; i++) {
		Diag0[i] = false;
		Diag1[i] = false;
	}
	for (i=0; i<N; i++) {
		int c = Positions[Index[i]].first;
		int r = Positions[Index[i]].second;
		if (Col[c] || Row[r])
			return false;
		Col[c] = true;
		Row[r] = true;
		
		int d0 = c + r;
		int d1 = c - r + N;
		if (Diag0[d0] || Diag1[d1])
			return false;
		Diag0[d0] = true;
		Diag1[d1] = true;
	}
	return true;
}

int main() {
	int i, j, r, c;
	i = 0;
	for (r=0; r<N; r++)
		for (c=0; c<N; c++) {
			Positions[i] = {c, r};
			i++;
		}
	long long count = 0;
	for (Index[0]=0; Index[0]<N2; Index[0]++)
		for (Index[1]=Index[0]+1; Index[1]<N2; Index[1]++)
			for (Index[2]=Index[1]+1; Index[2]<N2; Index[2]++)
				for (Index[3]=Index[2]+1; Index[3]<N2; Index[3]++)
					for (Index[4]=Index[3]+1; Index[4]<N2; Index[4]++)
						for (Index[5]=Index[4]+1; Index[5]<N2; Index[5]++)
							for (Index[6]=Index[5]+1; Index[6]<N2; Index[6]++)
								for (Index[7]=Index[6]+1; Index[7]<N2; Index[7]++)
									if (check())
										count++;
	cout << count << endl;
	return 0;
}
