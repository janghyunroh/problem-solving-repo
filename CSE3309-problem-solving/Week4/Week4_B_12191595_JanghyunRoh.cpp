/*
10
22 18 16
13 12
18 18 13
8 3
27 3 19
9 15
25 1 19
2 2
26 20 6
10 10
22 18 11
11 8
29 12 8
4 16
21 17 4
16 3
15 9 7
14 2
20 4 15
5 1

*/

/*
-1
9
-1
9
-1
8
4
17
1
7

*/

#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int T, N, X, Y, a, b;

void bfs() {
	bool* visited = new bool[N + 1];
	for(int i=1;i<=N;i++) visited[i] = false;
	queue<pair<int, int>> q;

	pair<int, int> stNode = make_pair(Y, 0);
	q.push(stNode);
	visited[Y] = true;

	while (!q.empty()) {

		int curIdx = q.front().first;
		int cnt = q.front().second;
		q.pop();

		if(curIdx == X) {	// ������ ����
			cout << cnt << "\n";
			return;	
		}

		int m_a = curIdx - a;
		int m_b = curIdx + b;

		if (m_a >= 1) {
			if (!visited[m_a]) {
				pair<int, int> newNode = make_pair(m_a, cnt + 1);
				q.push(newNode);
				visited[m_a] = true;
			}
		}
		
		if (m_b <= N) {
			if (!visited[m_b]) {
				pair<int, int> newNode = make_pair(m_b, cnt + 1);
				q.push(newNode);
				visited[m_b] = true;
			}
		}

		
	}

	cout << -1 << "\n";
	return;

}



void solve() {

	//���� ó��
	if (X == Y) {
		cout << 0 << "\n";
		return;	
	}

	if (a == b) {
		if ((X - Y) % a != 0) {
			cout << -1 << "\n";
			return;
		}
		else {
			bfs();
		}
	}

	else {
		bfs();
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> T;
	while (T--) {
		cin >> N >> X >> Y;
		cin >> a >> b;
		solve();
	}
}