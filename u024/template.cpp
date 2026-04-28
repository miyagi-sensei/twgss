// full solution
#include <iostream>
using namespace std;

int N;
bool Rects[1000][1000];


int main() {
    int i, j, sum = 0;
    string row;
    cin >> N;
    for (i=1; i<=N; i++) {
        cin >> row;
        for (j=1; j<=N; j++) {
            if (row[j] == '1') {
							printf("row %d col %d is 1\n");
            }
        }
    }
    return 0;
}