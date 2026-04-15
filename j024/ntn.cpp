// he seems to be struggling with finding what cases broke his code
// Hint: Read the Problem Statement more carefully, particularly tbe Output section
#include <bits/stdc++.h>
using namespace std;

long double getMean (int *p, int Size){
	long double mean = *p++;
	for (int i=1; i < Size; i++){
		mean = mean + (*p++ - mean) / (i+1);
	}
	return mean;
}

int getMode (int arr[], int Size){
	long long mode = arr[0];
	long long maxCount = 1;
	long long count = 1;
	for (int i=1; i < Size; i++){

		if (arr[i] == arr[i-1]){
			++count;
		}else {
			count = 1;
		}

		if (count > maxCount){
			maxCount = count;
			mode = arr[i];
		}
	}
	return mode;
}

int main() {
	long long n;
	long double mean;
	cin >> n;

	int arr[n];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}

	long long Size = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + Size);

	//mean
	long double meann = getMean (arr, Size);
	cout << fixed << setprecision(3) << meann << endl;

	//median
	if (n % 2 == 1){
		long long median = arr[n / 2];
		cout << median << endl;
	}else{
		long double median = (arr[n / 2 -1] + arr[n / 2] ) / 2.0;
		cout << fixed << setprecision(1) << median << endl;
	}

	//mode
	long long mode = getMode (arr, Size);
	cout << mode << endl;
}
