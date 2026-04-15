#include <iostream>
using namespace std;
// there is an integer overflow problem you need to fix here!

int N;
pair<int, int> A[100];

int moliu_index(pair<int, int> p) {
  return p.first * p.first + p.second * p.second;
}

// merge A[l1:r1] and A[l2:r2] and store at A[l1:r2]
// this is always the case: r1 + 1 = l2
void merge(int l1, int r1, int l2, int r2) {
  int i = l1, j = l2, k = l1;
  pair<int, int> temp[100];
  while (i <= r1 && j <= r2) {
    if (moliu_index(A[i]) < moliu_index(A[j])) {
      temp[k] = A[______];
      i++;
    } else {
      temp[k] = A[______];
      _________;
    }
    k++;
  }
  // TODO: append the residuals into temp[]
  // TODO: copy the contents from temp into A[l1:r2]
}

void mergesort(int l, int r) {
  if (l < r) {
    int m = (l + r) / 2;
    mergesort(l, m);
    mergesort(m + 1, r);
    merge(l, m, m + 1, r);
  }
}

int main() {
  int i, x, y;
  cin >> N;
  for (i = 0; i < N; i++) {
    cin >> x >> y;
    A[i] = {x, y};
  }
  mergesort(0, N - 1);
  for (i = 0; i < N; i++) {
    cout << A[i].first << " " << A[i].second << endl;
  }
  return 0;
}
