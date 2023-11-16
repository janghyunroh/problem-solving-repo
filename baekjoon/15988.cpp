// #include <iostream>

// using namespace std;
// using ll = long long;

// int T, N;
// ll dp[1000001]{0, };

// ll solve(int n) {
//     if(dp[n] != 0) return dp[n];

//     //재귀적으로 dp 수행
//     else {
//         dp[n] = (solve(n - 3) + solve(n - 2) + solve(n - 1)) % 1000000009;
//         return dp[n];
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     dp[0] = 1;
//     dp[1] = 1;
//     dp[2] = 2;

//     cin >> T;
//     while(T--) {
//         cin >> N;
//         cout << solve(N) << "\n";
//     }
// }