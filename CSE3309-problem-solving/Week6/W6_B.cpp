// //W6_B marathon - dfs(재귀)
// /**
//  * dfs(int node) {
//  *  visited[node] = true;
//  * max1, max2
//  *  for(int i=0;i<adjList[node].size(); i++) {
//  *      pair<int, int> tmp = adjList[node][i];
//  *      tmp.first -> node number
//  *      tmp.first -> weight
//  * 
//  *      max1, max2 update
//  * 
//  *  }
//  *  maxSize = max(maxSize, max1 + max2)
//  * return max1
//  * }
// */
// #include <iostream>
// #include <vector>

// using namespace std;

// int N;
// vector<pair<int, int>>* adjList;
// bool* visited;

// int maxSize;

// int dfs(int node) {
// 	visited[node] = true;

// 	int max1 = 0, max2 = 0;
// 	for (int i = 0; i < adjList[node].size(); i++) {
// 		pair<int, int> tmp = adjList[node][i];
		
// 		if (!visited[tmp.first]) {
// 			int path = dfs(tmp.first) + tmp.second;
// 			if (max1 < path) {
// 				max2 = max1;
// 				max1 = path;
// 			}
// 			else if (max2 < path)
// 				max2 = path;
// 		}
// 	}
// 	maxSize = max(maxSize, max1 + max2);
// 	return max1;

// }

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	maxSize = 0;
// 	cin >> N;
// 	adjList = new vector<pair<int, int>>[N + 1];
// 	visited = new bool[N + 1] {false, };

// 	int a, b, c;
// 	for (int i = 0; i < N - 1; i++) {
// 		cin >> a >> b >> c;
// 		adjList[a].push_back({ b, c });
// 		adjList[b].push_back({ a, c });
// 	}

// 	dfs(1);

// 	cout << maxSize << "\n";

// 	return 0;
// }