//#include <iostream>
//
//using namespace std;
//
//bool isPrime(int n) {
//	if (n == 1) return false;
//	for (int j = 2; j * j <= n; j++) {
//		if (n % j == 0) return false;
//	}
//	return true;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int M, N;
//	cin >> M >> N;
//
//	for (int i = M; i <= N; i++) {
//		if (isPrime(i)) cout << i << "\n";
//	}
//
//	return 0;
//}