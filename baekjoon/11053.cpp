// #include <iostream>
// #include <vector>

// using namespace std;

// int *dp;
// int *arr;
// int N;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     cin >> N;
//     arr = new int[N];
//     dp = new int[N];
//     for(int i=0;i<N;i++) {
//         cin >> arr[i];
//     }

//     for(int i=0;i<N;i++) {
//         dp[i] = 1;
//         for(int j = 0; j < i; j++) {
//             if(arr[j] < arr[i]) {
//                 dp[i] = max(dp[i], dp[j] + 1);
//             }
//         }
//     }

//     int max_ = 0;
//     for(int i=0;i<N;i++) max_ = max(max_, dp[i]);

//     cout << max_ << "\n";

//     return 0;


// }