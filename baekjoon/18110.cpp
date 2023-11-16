//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, sub;
//	cin >> n;
//
//	sub = (int)round((float)n * 0.15);
//
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++) cin >> arr[i];
//
//	sort(arr, arr + n);
//	int avg, sum = 0;
//	for (int i = sub; i < n - sub; i++) sum += arr[i];
//
//	
//	avg = (n == 0) ? 0 : (int)round((float)sum / (n - 2 * sub));
//	cout << avg << "\n";
//
//
//}