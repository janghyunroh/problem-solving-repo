// //W2_B - dp
// //주의) solve(i~j) = solve(i~k) + solve(k+1~j) + "size(i ~ j)"
// #include <iostream>

// //#define LONG_MAX 9223372036854775807
// #define INT_MAX 2147483647

// using namespace std;
// //using ll = long long;

// int T, N;
// int** dp;
// int* sizes;

// int solve(int i, int j) {
// 	if (dp[i][j] > 0 || i == j) return dp[i][j];
// 	dp[i][j] = INT_MAX;
// 	for (int k = i; k < j; k++) {
// 		dp[i][j] = min(dp[i][j], solve(i, k) + solve(k + 1, j) + sizes[j] - sizes[i - 1]);
// 	}

// 	return dp[i][j];
// }


// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	cin >> T;
// 	while (T--) {
// 		cin >> N;

// 		dp = new int*[N + 1];
// 		for (int i = 1; i <= N; i++) {
// 			dp[i] = new int[N + 1];
// 			dp[i][i] = 0;
// 		}
// 		sizes = new int[N + 1];
// 		sizes[0] = 0;

// 		int a;
// 		for (int i = 1; i <= N; i++) {
// 			cin >> a;
// 			sizes[i] = sizes[i - 1] + a;
// 		}

// 		cout << solve(1, N) << "\n";

// 	}

// 	return 0;
// }