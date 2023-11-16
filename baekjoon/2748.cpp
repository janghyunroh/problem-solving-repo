// #include <iostream>

// using namespace std;
// using ll = long long;

// int N;
// ll dp[91]{0, };

// ll solve(int N) {
//     if(N==0) return 0;
//     else if(dp[N] == 0) {
//         dp[N] = solve(N - 1) + solve(N - 2);
//         return dp[N];
//     }
//     else return dp[N];
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     dp[0] = 0;
//     dp[1] = 1;

//     cin >> N;
//     cout << solve(N) << "\n";
//     return 0;
// }