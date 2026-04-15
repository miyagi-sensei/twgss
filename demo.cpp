#include <iostream>
#include <fstream>
using namespace std;

int N;
int Cards[200001];	// 1: alice's cards; 0: Betty's unused cards; 2: Betty's used cards
ifstream fs("count.in");
ofstream os("count.out");

int main() {
	int i, card, score = 0, j;
	fs >> N;
	for (i=0; i<N; i++) {
		fs >> card;
		Cards[i] = card;
		// save alice's cards
	}
	for (i=0; i<N; i++)
		os << Cards[i] << endl;
	return 0;
}