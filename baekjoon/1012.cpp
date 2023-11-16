//#include <iostream>
//
//using namespace std;
//
//int T, M, N, K;
//int** arr;
//
///*
//최소 부분 찾기
//
//
//배추밭의 각 1인 원소 별로 dfs 실행.
//arr[i][j]에 대해
//1. 이동하려는 곳이 범위를 벗어나는 경우 return
//2. 이동하려는 곳이 이미 1이 아닌 경우 return 
//
//인접이 founnd인 경우 이동 후 2로 변경.(2 = found)
//dfs가 모두 종료되면 tot_cnt를 1증가
//
//이후 계속해서 반복문을 돌면서 1인 원소에 대해서만 dfs 실행
//*/
//
//
////주의! i가 y좌표, j가 x좌표임!
//void dfs(int i, int j) {	// 상, 우, 하, 좌 순서로 진행
//
//	arr[i][j] = 2;	//found
//
//	//1. 상
//	if (i - 1 >= 0 && arr[i - 1][j] == 1) dfs(i - 1, j);
//	
//	//2. 우
//	if (j + 1 < M && arr[i][j + 1] == 1) dfs(i, j + 1);
//
//	//3. 하
//	if (i + 1 < N && arr[i + 1][j] == 1) dfs(i + 1, j);
//	
//	//4. 좌
//	if (j - 1 >= 0 && arr[i][j - 1] == 1) dfs(i, j - 1);
//	
//	return;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	cin >> T;
//	while (T--) {
//
//		int tot_cnt = 0;	//총 지렁이 마리수
//		cin >> M >> N >> K;
//
//		//init	O(NM)
//		arr = new int* [N];
//		for (int i = 0; i < N; i++) {
//			arr[i] = new int[M];
//			for (int j = 0; j < M; j++) {
//				arr[i][j] = 0;
//			}
//		}
//
//		//input O(K)
//		for (int i = 0; i < K; i++) {
//			int x, y;
//			cin >> x >> y;
//			arr[y][x] = 1;
//		}
//
//		//calculate 
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				
//				//dfs
//				if (arr[i][j] == 1) {
//					dfs(i, j);
//					tot_cnt++;
//				}
//				
//			}
//		}
//
//		cout << tot_cnt << "\n";
//
//		//할당 해제
//		for (int i = 0; i < N; i++) delete[] arr[i];
//
//		delete arr;
//	}
//}