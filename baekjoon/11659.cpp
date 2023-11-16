//#include <iostream>
//
//using namespace std;
//
//int N, M;
//int* arr;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	cin >> N >> M;
//	arr = new int[N + 1];
//	arr[0] = 0;
//
//	int a;
//	for (int i = 1; i <= N; i++) {
//		cin >> a;
//		arr[i] = arr[i - 1] + a;
//	}
//	int i, j;
//	for (int k = 0; k < M; k++) {
//		cin >> i >> j;
//		cout << arr[j] - arr[i - 1] << "\n";
//	}
//
//	return 0;
//}