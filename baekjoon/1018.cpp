//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	//���� ���� W�� ���� B�� ��츦 ������ �����ؾ���
//	char wBoard[8][8] = {
//		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
//		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
//		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
//		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
//		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
//		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
//		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
//		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'} };
//
//	char bBoard[8][8] = {
//		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
//		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
//		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
//		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
//		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
//		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
//		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
//		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'} };
//
//	//input
//	int N, M;
//	cin >> N >> M;
//	char** arr;
//	arr = (char**)malloc(sizeof(char*) * N);
//	for (int i = 0; i < N; i++) {
//		arr[i] = (char*)malloc(sizeof(char) * M);
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	//starting calculation
//	int min = 64;
//
//	for (int i = 0; i < N - 7; i++) {
//		for (int j = 0; j < M - 7; j++) {	// arr[i][j] = left right corner for 8 x 8 temporary board
//			int wCount = 0; // ���� ���� W�� ���
//			int bCount = 0; // ���� ���� B�� ���
//
//			//fix�� �ڳ� �ϳ��� ���� �ּ� ���� ���ϱ�
//			for (int k = 0; k < 8; k++) {
//				for (int l = 0; l < 8; l++) {
//					if (arr[i + k][j + l] != wBoard[k][l]) wCount++;
//					if (arr[i + k][j + l] != bBoard[k][l]) bCount++;
//				}
//				
//			}
//			if (wCount < min) min = wCount;
//			if (bCount < min) min = bCount;
//		}
//	}
//
//	cout << min;
//}