// #include <iostream>
// #include <deque>
// #include <vector>

// using namespace std;
// using ll = long long;

// int T, N;

// ll solve(deque<int> &subjects) {
// 	int n = subjects.size();
// 	vector<vector<ll> > dp(n, vector <ll>(n, 0));

// 	for (int i = 0; i < n; i++)  dp[i][i] = (ll)subjects[i] * n; 
	

// 	for (int len = 2; len <= n; len++) {
// 		for (int i = 0; i <= n - len; i++) {
// 			int j = i + len - 1;
// 			int days = n - len + 1;

// 			dp[i][j] = max((ll)subjects[i] * days + dp[i+1][j], (ll)subjects[j] * days + dp[i][j - 1]);
// 		}
// 	}

// 	return dp[0][n - 1];
// }


// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	cin >> T;
// 	while (T--) {
// 		cin >> N;
// 		deque<int> dq;
// 		for (int i = 0; i < N; i++) {
// 			int tmp;
// 			cin >> tmp;
// 			dq.push_back(tmp);
// 		}

// 		cout << solve(dq) << "\n";
// 	}
// }