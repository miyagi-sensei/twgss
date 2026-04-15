// find the bug in this program
#include <iostream>
using namespace std;

int N;
int Cards[200001];  
// Cards[i] == 1: Alice has card i
// Cards[i] == 0: Betty's card i is unused
// Cards[i] == 2: Betty's card i has already been used to beat Alice in a hand

int main() {
	int i, j = 0, card, score = 0;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> card;
		Cards[card] = 1;
	}
	for (i=1; i<=2*N; i++) {
		if (Cards[i] == 1) { // i is Alice's card
			// find Betty's smallest unused card that beats i
			for (j=i+1; j<=2*N; j++) {
				if (Cards[j] == 0) {
					score++;
					Cards[j] = 2;
				}
			}
		}
	}
	cout << score << endl;
	return 0;
}