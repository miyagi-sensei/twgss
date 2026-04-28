/*
1. find the max element, save it into max1
2. delete that element and search again for the max, now that's max2
*/
#include <iostream>
#define INF -2147483648
using namespace std;
int main() {
    int a[10];
    int n;
    int max1, max2 = INF , max_i = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > a[max_i])
            max_i = i;
    }
    max1 = a[max_i];
    a[max_i] = INF;	// "delete" the max element
    max2 = a[0];
    for (int i = 1; i < n; i++)
        max2 = max(max2, a[i]);
    cout << max1 << endl << max2 << endl;

    return 0;
}
