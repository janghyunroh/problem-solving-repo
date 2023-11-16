//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Coord {
//public:
//	int x, y;
//	Coord(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}
//};
//
//bool comp(Coord a, Coord b) {
//	return a.x == b.x ? a.y < b.y : a.x < b.x;
//}
//
//int main() {
//	int N;
//	cin >> N;
//	vector<Coord> coords;
//	for (int i = 0; i < N; i++) {
//		int x, y;
//		cin >> x >> y;
//		Coord coord(x, y);
//		coords.push_back(coord);
//	}
//	sort(coords.begin(), coords.end(), comp);
//
//	for (int i = 0; i < N; i++) {
//		cout << coords[i].x << " " << coords[i].y << "\n";
//	}
//
//}