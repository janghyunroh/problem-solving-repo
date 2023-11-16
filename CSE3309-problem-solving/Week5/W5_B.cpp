// //W5_B - 
// /**
//  * optimal substructure -> 일수를 뒤에서부터 곱함!
//  * dp[i][i] = deq[i] * N;
//  * dp[i][j] = dp[i][j - 1] + deq[j] * days
//  *                      or
//  *            dp[[i + 1][j] + deq[i] * days
//  * 
//  * 하나씩 pop하므로 dp(i~j) = dp(i ~ j - 1) or dp(i + 1 ~ j)
//  * 
//  * 
// */
// #include <iostream>

// using namespace std;
// using ll = long long;

// int T, N;
// ll** dp;
// int* deq;

// ll solve() {

// 	int days = N;

// 	for (int i = 1; i <= N; i++) {
// 		dp[i][i] = deq[i] * days;
// 	}

// 	days--;
// 	for (int len = 2; len <= N; len++) {
// 		for (int i = 1; i <= N - len + 1; i++) {
// 			int j = i + len - 1;
// 			dp[i][j] = max(dp[i][j - 1] + deq[j] * days, dp[i + 1][j] + deq[i] * days);
// 		}
// 		days--;
// 	}
// 	return dp[1][N];
// }

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	cin >> T;
// 	while (T--) {
// 		cin >> N;
// 		dp = new ll* [N + 1];
// 		deq = new int[N + 1];
// 		int a;
// 		for (int i = 1; i <= N; i++) {
// 			dp[i] = new ll[N + 1];
// 			cin >> deq[i];
// 		}

// 		cout << solve() << "\n";
// 	}
// 	return 0;
// }