/*
a clever online streaming solution
*/
#include <iostream>
using namespace std;

int main()
{
    int max, max2,n, num;
    cin >> n;
    max = -2147483648;
    max2 = max;
    for (int i=0; i<n; i++) {
        cin >> num;
        if (num > max) {
            max2 = max;
            max = num;
        } else if (num > max2) {	// sometimes the second max arrives after the max element
            max2 = num;
        }
    }
    cout << max << endl << max2 << endl;
    return 0;
}