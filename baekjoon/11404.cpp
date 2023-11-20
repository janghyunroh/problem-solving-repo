#include <iostream>
#include <vector>
#include <algorithm>

#define INF 1000000000

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N; cin >> N;
    int M; cin >> M;
    vector<vector<int>> graph(N + 1, vector<int>(N + 1, INF));
    vector<vector<int>> dist(N + 1, vector<int>(N + 1, INF));
    for(int i=0;i<M;i++) {
        int a, b, c; cin >> a >> b >> c;
        graph[a][b] = c;
        graph[b][a] = c;
    }

    //
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            if(i==j) dist[i][j] = 0;
            else dist[i][j] = graph[i][j];
        }
    }

    
    cout << "\n\n";
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    for(int k = 1; k <= N; k++) {
        for(int a = 1; a <= N; a++) {
            for(int b = 1; b <= N; b++) {
                dist[a][b] = min(dist[a][b], dist[a][k] + dist[k][b]);
            }
        }
    }

    //
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            if(dist[i][j] == INF) cout << 0 << " ";
            else cout << dist[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;

}