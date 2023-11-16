///*
//1 = 1								1
//2 = 2 | 1 + 1		=>				2
//3 = 1 + 1 + 1 | 2 + 1 | 1 + 2 | 3	4
//
//k = 
//(k-1) + 1
//(k - 2) + 2
//(k - 3) + 3
//
//dp[k] = dp[k - 1] + dp[k - 2] + dp[k - 3]
//
//*/
//
//
//#include <iostream>
//
//using namespace std;
//
//int T, N;
//int dp[12];
//
//void solve() {
//	for (int i = 0; i <= 11; i++) {
//		if (i == 0) dp[i] = 1;
//		else if (i == 1)dp[i] = 1;
//		else if (i == 2) dp[i] = 2;
//		else dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	cin >> T;
//	solve();
//
//	while (T--) {
//		cin >> N;
//		cout << dp[N] << "\n";
//	}
//	return 0;
//}