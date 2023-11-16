#include <iostream>

using namespace std;

int T, N;
int **dp;
int *sizes;



int main() {
    cin >> T;
    while(T--) {
        cin >> N;
        dp = new int*[N];
        sizes = new int[N];
        for(int i=0;i<N;i++) {
            dp[i] = new int[N];


            cin >> sizes[i];
            dp[i] = new int[sizes[i]];
            
        }

        for(int len = 2; len <= N; len++) {
            for(int i = 0; i < N; i++) {
                int j = i + len - 1;

                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);

            }
         }


    }
}