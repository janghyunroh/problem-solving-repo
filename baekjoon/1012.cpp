//#include <iostream>
//
//using namespace std;
//
//int T, M, N, K;
//int** arr;
//
///*
//�ּ� �κ� ã��
//
//
//���߹��� �� 1�� ���� ���� dfs ����.
//arr[i][j]�� ����
//1. �̵��Ϸ��� ���� ������ ����� ��� return
//2. �̵��Ϸ��� ���� �̹� 1�� �ƴ� ��� return 
//
//������ founnd�� ��� �̵� �� 2�� ����.(2 = found)
//dfs�� ��� ����Ǹ� tot_cnt�� 1����
//
//���� ����ؼ� �ݺ����� ���鼭 1�� ���ҿ� ���ؼ��� dfs ����
//*/
//
//
////����! i�� y��ǥ, j�� x��ǥ��!
//void dfs(int i, int j) {	// ��, ��, ��, �� ������ ����
//
//	arr[i][j] = 2;	//found
//
//	//1. ��
//	if (i - 1 >= 0 && arr[i - 1][j] == 1) dfs(i - 1, j);
//	
//	//2. ��
//	if (j + 1 < M && arr[i][j + 1] == 1) dfs(i, j + 1);
//
//	//3. ��
//	if (i + 1 < N && arr[i + 1][j] == 1) dfs(i + 1, j);
//	
//	//4. ��
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
//		int tot_cnt = 0;	//�� ������ ������
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
//		//�Ҵ� ����
//		for (int i = 0; i < N; i++) delete[] arr[i];
//
//		delete arr;
//	}
//}