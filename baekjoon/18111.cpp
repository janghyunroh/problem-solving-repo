//#include <iostream>
//#include <utility>
//#define MAX_INT 2147483647
//
//using namespace std;
//
//int N, M, B;
//int** arr;
//
////정답 높이 계산 함수(완전탐색)
//pair <int, int> solve(int minH, int maxH) {	// O(NM)
//
//	int minTime = MAX_INT;
//	int h;
//	pair<int, int> p;
//
//	for (int i = maxH; i >= minH; i--) { //Worst case O(C)
//
//		int dig = 0;
//		int place = 0;
//
//		// O (NM)
//		for (int j = 0; j < N; j++) {
//			for (int k = 0; k < M; k++) {
//				if (arr[j][k] > i) dig += (arr[j][k] - i);
//				if (arr[j][k] < i) place += (i - arr[j][k]);
//			}
//		}
//
//		//inventory check
//		if (place > dig + B) continue;
//		
//		//time check
//		int time = dig * 2 + place;
//
//		if (minTime > time) {
//			minTime = time;
//			h = i;
//		}
//	}
//
//	p.first = minTime;
//	p.second = h;
//
//	return p;
//}
//
//
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	cin >> N >> M >> B; 
//	arr = new int* [N];
//
//	//input
//	int minH = 257, maxH = 0;
//	for (int i = 0; i < N; i++) {
//		arr[i] = new int[M];
//		for (int j = 0; j < M; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] < minH) minH = arr[i][j];
//			if (arr[i][j] > maxH) maxH = arr[i][j];
//		}
//	}
//
//
//	//높이 구하기
//	pair<int, int> ans = solve(minH, maxH);
//
//	cout << ans.first << " " << ans.second << endl;
//
//}