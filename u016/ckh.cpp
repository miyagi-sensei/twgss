#include <iostream>
using namespace std;

int main() {
  double o;
  int p, n;
  cin >> o >> p >> n;
  long long m = o*100;
  for (int i = 0; i < n; i++) {
    long long l = m*p/100;
    m = m - l;
  }
  printf("%.2f\n", m/100.0);
  return 0;
}
