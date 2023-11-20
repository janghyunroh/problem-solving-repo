#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<int> visited;
int cnt;
int N;

void DFS(int node) {
    visited[node] = true;
    cnt++;
    for(int i = 1; i <= N; i++) {
        if(graph[node][i] && !visited[i]) DFS(i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int T; cin >> T;
    while(T--) {

        //input
        int M; cin >> N >> M;
        graph = vector<vector<int>>(N + 1, vector<int>(N + 1, 0));
        visited = vector<int>(N + 1, false);
        vector<int>cnts;
        for(int i=0;i<M;i++) {
            int a, b; cin >> a >> b;
            graph[a][b] = 1;
        }

        //processing - DFS N times
        for(int i=1;i<=N;i++) {
            cnt = 0;
            DFS(i);
            cnts.push_back(cnt - 1);
            for(int j=1;j<=N;j++)visited[j] = false; //re-initialize
        }

        //output
        for(int n : cnts) cout << n << " ";
        cout << "\n";
    }
    return 0;
}