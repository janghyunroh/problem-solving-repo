// #include <iostream>

// using namespace std;

// int T, N;

// int getAreaNum(int x, int y) {
// 	int new_x = x, new_y = y;
// 	if (x > N / 2) new_x = N - x + 1;   //평행 이동
// 	if (y > N / 2) new_y = N - y + 1;   //평행 이동

// 	return new_x > new_y ? new_y : new_x;   //더 작은 좌표 = 영역 번호
// }

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	cin >> T;
// 	while (T--) {
// 		int x1, y1, x2, y2;
// 		cin >> N;
// 		cin >> x1 >> y1 >> x2 >> y2;

// 		cout << "result : " << getAreaNum(x1, y1) << " " << getAreaNum(x2, y2) << "\n";

// 		cout << abs(getAreaNum(x1, y1) - getAreaNum(x2, y2)) << "\n";

// 	}

// 	return 0;
// }