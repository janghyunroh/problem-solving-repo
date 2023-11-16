// //W4_B - 슈팅 게임  (BFS)
// /**
//  * bfs 과정 - root node visit 후 while(!q.empty) 시전
//  * tree의 depth 같은 경우 node에 추가 정보로 저장
// */
// #include <iostream>
// #include <queue>

// using namespace std;

// int T, N, X, Y, a, b;

// int bfs() {

// 	bool visited[1000001] = { false, };
// 	queue<pair<int, int>> q;
// 	q.push({ Y, 0 });
// 	visited[Y] = true;

// 	while (!q.empty()) {
// 		pair<int, int> node = q.front();
// 		q.pop();
		
// 		if (node.first == X) return node.second;

// 		if (node.first - a > 0 && !visited[node.first - a]) {
// 			q.push({ node.first - a, node.second + 1 });
// 			visited[node.first - a] = true;
// 		}

// 		if (node.first + b <= N && !visited[node.first + b]) {
// 			q.push({ node.first + b, node.second + 1 });
// 			visited[node.first + b] = true;
// 		}
		
// 	}

// 	return -1;

// }

// int solve() {
// 	if (X == Y) return 0;
// 	if (a == b) {
// 		if ((X - Y) % a != 0) return -1;
// 		else return bfs();
// 	}
// 	return bfs();
// }


// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	cin >> T;
// 	while (T--) {
// 		cin >> N >> X >> Y;
// 		cin >> a >> b;
// 		cout << solve() << "\n";
// 	}

// 	return 0;
// }