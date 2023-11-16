//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N, M;
//vector<int>* adjList;
//bool* visited;
//int cnt;
//
//void dfs(int node) {
//	visited[node] = true;
//	cnt++;
//	for (int i = 0; i < adjList[node].size(); i++) {
//		int tmp = adjList[node][i];
//		if (!visited[tmp]) {
//			dfs(tmp);
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	cnt = 0;
//	cin >> N;
//	adjList = new vector<int>[N + 1];
//	visited = new bool[N + 1] {false, };
//
//	cin >> M;
//	int a, b;
//	for (int i = 1; i <= M; i++) {
//		cin >> a >> b;
//		adjList[a].push_back(b);
//		adjList[b].push_back(a);
//	}
//
//	dfs(1);
//
//	cout << cnt - 1 << "\n";
//	return 0;
//
//}