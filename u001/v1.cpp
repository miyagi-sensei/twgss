#include <iostream>
using namespace std;

int N;
int Cards[200001];	// 1: alice's cards; 0: Betty's unused cards; 2: Betty's used cards

int main() {
	int i, card, score = 0, j;
	cin >> N;
	for (i=0; i<N; i++) {
		cin >> card;
		Cards[card] = 1;
		// save alice's cards
	}
	for (i=1; i<=2*N; i++) {
		if (Cards[i] == 1) {	// it's Alice's card
			// printf("Alice card: %d\n", i);
			for (j=i+1; j<=2*N; j++) {
				if (Cards[j] == 0) {
					// printf("%d %d\n", i, j);
					score++;
					Cards[j] = 2;
					break;
				}
			}			
		}
	}
	cout << score << endl;
	/*
	for each of alice's card <i>:
		find the smallest unused card of Betty that is larger than i
		score++
		mark this card <j>
		*/
	return 0;
}