// #include <iostream>

// using namespace std;

// int N;
// int** arr;

// int numW;	//흰 종이 개수
// int numB;	//파란 종이 개수

// //해당 영역이 파랑 단색인지 하양 단색인지 복합색인지 판별
// int colorType(int x, int y, int length) {	
// 	//all white : 0
// 	//all blue : 1
// 	// mixed : -1
// 	bool W;
// 	for(int i=x;i<x+length;i++) {
// 		for(int j=y;j<y+length;j++) {
// 			if(arr[i][j] != arr[x][y]) return -1;
// 			if(arr[i][j] == 0) W = true;
// 			else W = false;
// 		}
// 	}

// 	if(W) return 0;
// 	else return 1;

// }

// //재귀적으로 실행되며 numW와 numB를 갱신
// void solve(int x, int y, int length) {	//x, y: 왼쪽 위 좌표 | length : 종이의 한 변 길이

// 	//단색 판별
// 	int color = colorType(x, y, length);
// 	switch(color) {
// 		case 1:
// 			numB++;
// 			return;
// 		case 0:
// 			numW++;
// 			return;
// 		default:	//	4분할하여 재귀적으로 수행
// 			solve(x, y, length / 2);
// 			solve(x + length / 2, y, length / 2);
// 			solve(x, y + length / 2, length / 2);
// 			solve(x + length / 2, y + length / 2, length / 2);
// 			return;
// 	}
// }

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	numW = 0;
// 	numB = 0;

// 	cin >> N;
// 	arr = new int* [N];
// 	for (int i = 0; i < N; i++) {
// 		arr[i] = new int[N];
// 		for (int j = 0; j < N; j++) {
// 			cin >> arr[i][j];
// 		}
// 	}

// 	solve(0, 0, N);
// 	cout << numW << "\n" << numB;
// 	return 0;
// }