////1436
//
//#include <iostream>
//#include <utility>
//#define INT_MAX 2147483647
//
//using namespace std;
//
//int N;
//int* dp;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	cin >> N;
//	dp = new int[N + 1];
//
//	for (int i = 1; i <= N; i++) {
//		if (i == 1) dp[i] = 0;
//		else {
//			int a = INT_MAX, b = INT_MAX, c = dp[i - 1] + 1;
//			if (i % 2 == 0) a = dp[i / 2] + 1;
//			if (i % 3 == 0) b = dp[i / 3] + 1;
//
//			int min_ = min(a, b);
//			dp[i] = min(min_, c);
//		}
//	}
//	cout << dp[N];
//	return 0;
//}