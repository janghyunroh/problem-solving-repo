#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int T; cin >> T;
    while(T--) {

        //input
        int N, M; cin >> N >> M;
        vector<vector<int>> graph(N + 1, vector<int>(N + 1, 0));
        for(int i=0;i<M;i++) {
            int a, b; cin >> a >> b;
            graph[a][b] = 1;
        }

        //processing - Floyd-Warshall
        for(int k=1;k<=N;k++) {
            for(int a = 1; a <= N; a++) {
                for(int b = 1; b <= N; b++) {
                    if(graph[a][k] && graph[k][b]) graph[a][b] = 1;
                }
            }
        }

        //print
        for(int i=1;i<=N;i++) {
            int cnt = 0; for(int n : graph[i]) if(n) cnt++;
            cout << cnt << " ";
        }
        cout << "\n";
    }

    return 0;
}