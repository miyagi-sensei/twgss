# Class 10
## [D804 merging sorted arrays](https://judge.hkoi.org/task/D804)
```
#include <iostream>
using namespace std;
int A[100000], B[100000], C[200000], N, M;
int main() {
    int i, j;
    cin >> N >> M;
    for (i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (i = 0; i < M; i++) {
        cin >> B[i];
    }
    i = 0; j = 0;
    while (i < N && j < M) {
        if (A[i] < B[j]) {
            C[i+j] = A[i];
            i++;
        } else {
            C[i+j] = B[j];
            j++;
        }
    }
    for (; i<N; i++)
        C[i+j] = A[i];
    for (; j<M; j++)
        C[i+j] = B[j];
    for (i=0; i<N+M; i++)
        cout << C[i] << " ";
    cout << endl;
}
```

## Using [01068 Moliu Sorting](https://judge.hkoi.org/task/01068) to practice merge sort implementation.

First learn `pair`. `pair` is extremely useful for the competition because often you're dealing with pairs of integers. To store a list of pairs (X, Y) like in this problem, you declare:
`pair<int, int> A[100];`<br>
You can do `pair<int, string>`, `pair<string, double>`, `pair<bool, int>`, etc.

So this program would look like this:
```
#include <iostream>
using namespace std;
pair<int, int> A[100];
int N;

void mergesort(int l, int r){
    ...
    ...
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
```
Try to write mergesort and pass the online judge. Here is the [model solution](https://github.com/miyagi-sensei/twgss/blob/main/01068.cpp) for your reference.

---

## Recursion
### [Fibonacci numbers](https://judge.hkoi.org/task/D201)
```
int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
```

### [Prime factorization](https://judge.hkoi.org/task/D205)
Iterative version
```
#include <iostream>
using namespace std;

int N;

// return the smallest factor of num - it'll turn out to be a prime factor
int smallest_factor(int num) {
    for (int i=2; i*i<=num; i+=1) {
        if (num % i == 0) {
            return i;
        }
    }
    return num;
}

int main() {
    int factor;
    cin >> N;
    cout << N << "=";
    while (true) {
        factor = smallest_factor(N);
        if (factor != N) {
            cout << factor << "*";
            N /= factor;
        } else {
            cout << N << endl;
            return 0;
        }
    }

    return 0;
}
```
The recursive way is much easier:
```
void factorize(int num) {
    for (int i=2; i*i<=num; i+=1) {
        if (num % i == 0) {
            cout << i << "*";
            factorize(num / i);
            return;
        }
    }
    cout << num << endl;
}
```

---

# Homework
## Watch this [video about recursion](https://youtu.be/B0NtAFf4bvU) and solve the problem at the end.
## [D201](https://judge.hkoi.org/task/D201)
## [D205](https://judge.hkoi.org/task/D205)

---

# Extra Bonus Homework
## [j181 - subtask 3](https://judge.hkoi.org/task/J181) (Hint: use recursion)
