#include <iostream>

using namespace std;
using ll = long long;

int T, N;
ll dp[68]{0, };

ll solve(int N) {
    if(dp[N] != 0) return dp[N];
    else {
        dp[N] = solve(N - 1) + solve(N - 2) + solve(N - 3) + solve(N - 4);
        return dp[N];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    dp[0] = 1; 
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    cin >> T;
    while(T--) {
        cin >> N;
        cout << solve(N) << "\n";
    }
    return 0;
}