//#include <iostream>
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
//	for (int i = 1; i <= N; i++) {
//		if (i == 1)dp[i] = 1;
//		else if (i == 2)dp[i] = 2;
//		else dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
//	}
//	cout << dp[N];
//	return 0;
//}