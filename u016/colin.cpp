#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   long double d,c;
  int a,b;
  cin>>d>>a>>b;
  for(int i=0;i<b;i++){
    c=d*(a/100.0);
    c=(long double)((long long)(c*100))/100.0l;
    d-=c;
   
    }
  cout<<fixed<<setprecision(2)<<d<<endl;
  return 0;
}
