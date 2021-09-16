#include <iostream>
using namespace std;
pair<int, int> A[100];
int N;

long long moliu(pair<int, int> p) {
    return (long long) p.first * p.first + (long long)p.second * p.second;
}

// merge 2 sorted arrays A[l1:r1] and A[l2:r2] (l2=r1+1 always)
// then put the merged result back in A[l1:r2]
void merge(int l1, int r1, int l2, int r2){
    int i = l1, j = l2, k = l1;
    pair<int, int> temp[100];
    while (i <= r1 && j <= r2) {
        if (moliu(A[i]) < moliu(A[j])) {
            temp[k] = A[i];
            i++;
        } else {
            temp[k] = A[j];
            j++;
        }
        k++;
    }
    for (; i<=r1; i++, k++)
        temp[k] = A[i];
    for (; j<=r2; j++, k++)
        temp[k] = A[j];
    for (i=l1; i<=r2; i++)
        A[i] = temp[i];
}

void mergesort(int l, int r){
    if (l < r){
        int m = (l + r) / 2;
        mergesort(l, m);
        mergesort(m + 1, r);
        merge(l, m, m+1, r);
    }
}

int main() {
    int x, y;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> x >> y;
        A[i] = {x, y};
    }
    mergesort(0, N-1);
    for (int i = 0; i < N; i++){
        cout << A[i].first << " " << A[i].second << endl;
    }
    return 0;
}

