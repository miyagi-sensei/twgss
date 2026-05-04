#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  double N, lost, A, valueafter;
  int B;
  cin >> N >> A >> B;
  valueafter=N;
  printf("N=%0.4f, A=%0.4f, B=%d\n", N, A, B);
  for(int i=0;i<B;i++){
    lost=floor(valueafter*(A/100)*100)/100;
    printf("%2d: valueafter*(A/100) =           %0.20f\n", i, valueafter*(A/100));
    printf("   valueafter*(A/100)*100 =        %0.20f\n", valueafter*(A/100)*100);
    printf("   floor(valueafter*(A/100)*100) = %0.20f\n", floor(valueafter*(A/100)*100));
    printf("   lost=%0.7f, ", lost);
    valueafter-=lost;
    printf("N=%0.7f\n", valueafter);
  }
  cout << fixed << setprecision(2) << valueafter << '\n';
}