// #include <iostream>
// #include <vector>

// using namespace std;

// int N, M;
// vector<int>*adjList;
// bool *visited;
// int cnt = 0;

// void dfs(int node) {
//     visited[node] = true;
//     for(int i=0;i<adjList[node].size();i++) {
//         int next = adjList[node][i];
//         if(!visited[next]) {
//             dfs(next);
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     cin >> N >> M;
//     adjList = new vector<int> [N + 1];
//     visited = new bool[N + 1]{false, };
//     int a, b;
//     for(int i=0;i<M;i++) {
//         cin >> a >> b;
//         adjList[a].push_back(b);
//         adjList[b].push_back(a);
//     }

//     for(int i=1;i<=N;i++) {
//         if(!visited[i]) {
//             dfs(i);
//             cnt++;
//         }
//     }

//     cout << cnt;
//     return 0;
// }