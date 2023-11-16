//#include <iostream>
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
//	dp[0] = 0;
//	for (int i = 1; i <= N; i++) dp[i] = INT_MAX;
//
//	for (int i = 1; i <= N + 1; i++) {
//
//		for (int j = 1; j * j <= i; j++) {
//			int sq = j * j;
//
//			dp[i] = min(dp[i], dp[i - sq] + 1);
//		}
//	}
//
//	cout << dp[N];
//	return 0;
//}