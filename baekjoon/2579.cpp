//#include <iostream>
//
//using namespace std;
//
//int *dp;
//int *arr;
//int N;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	cin >> N;
//	dp = new int[N + 1];
//	arr = new int[N + 1];
//	for (int i = 1; i <= N; i++)cin >> arr[i];
//	for (int i = 0; i <= N; i++) {
//		if (i == 0) dp[i] = 0;
//		else if (i == 1) dp[i] = arr[i];
//		else if (i == 2) dp[i] = arr[i] + arr[i - 1];
//		else {
//			int a = dp[i - 3] + arr[i -1] + arr[i];
//			int b = dp[i - 2] + arr[i];
//			dp[i] = max(a, b);
//		}
//	}
//	cout << dp[N];
//	return 0;
//}