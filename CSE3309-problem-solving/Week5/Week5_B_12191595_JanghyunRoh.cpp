// #include <iostream>
// #include <vector>
// #include <deque>
// #include <algorithm>

// using ll = long long;
// using namespace std;

// int T, N;

// ll solve(deque<int> &subjects) {
//     vector<vector<ll>> dq(N, vector<ll>(N, 0));
//     int maxSum;

//     for(int i=0;i<N;i++) dq[i][i] = subjects[i] * N;

//     for(int len = 2; len <= N; len++) {
//         for(int i = 0; i<= N - len; i++) {
//             int j = i + len - 1;
//             int days = N - len + 1;

//             dq[i][j] = max(dq[i+1][j] + (ll)subjects[i] * days, dq[i][j-1] + (ll)subjects[j] * days);

//         }
//     }

//     return dq[0][N-1];
// }

// int main() {
//     cin >> T;

//     int N;
//     while(T--) {
//         deque<int> subjects;
//         for(int i=0;i<N;i++) {
//             int tmp;
//             cin >> tmp;
//             subjects.push_back(tmp);
//         }
//         cout << solve(subjects) << "\n";
//     }
 
//  }