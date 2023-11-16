#include <iostream>

using namespace std;

//영역 번호 계산
int getAreNum(int n, int x, int y) {

	if (x == y) {
		if (x <= (n / 2)) return x;
		else return n - x + 1;
	}
	if (x > y) {
		if (x + y <= n) return y;
		else return n - x + 1;
	}

	if (x < y) {
		if (x + y <= n) return x;
		else return n - y + 1;
	}
	/*for (int i = 1; i <= n / 2; i++) {
		if (x >= i && x <= n + 1 - i && y == i) return i;
		if (x >= i && x <= n + 1 - i && y == n + 1 - i) return i;
		if (x == i && y <= n + 1 - i && y >= i) return i;
		if (x == n + 1 - i && y <= n + 1 - i && y >= i) return i;
	}*/
}

//두 영역 사이 최소 제거 벽 개수 계산
int minWall(int n, int x1, int y1, int x2, int y2) {
	return (getAreNum(n, x1, y1) - getAreNum(n, x2, y2)) > 0 ? (getAreNum(n, x1, y1) - getAreNum(n, x2, y2)) : (getAreNum(n, x2, y2) - getAreNum(n, x1, y1));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, n, x1, x2, y1, y2;
	cin >> T;
	while (T--) {
		cin >> n;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << minWall(n, x1, y1, x2, y2) << "\n";
	}
}