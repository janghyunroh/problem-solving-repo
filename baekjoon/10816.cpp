//#include <iostream>
//#include <algorithm>
///*
//���� �I ���� Ž��  ���� -> lower/upper bound�� sort ���
//*/
//
//using namespace std;
//
//int main() {
//
//	//�ӵ� ��� ���� �۾�
//	ios_base::sync_with_stdio(false);	//stdio ����ȭ ����
//	cin.tie(NULL);						
//	cout.tie(NULL);						//cin, cout�� tie ����
//
//	int N, M;
//	
//
//	cin >> N;
//	int* cards = new int[N];
//	for (int i = 0; i < N; i++) {
//		cin >> cards[i];
//	}
//
//
//	sort(cards, cards + N);
//
//
//	cin >> M;
//	for (int i = 0; i < M; i++) {
//		int find;
//		cin >> find;
//		cout << upper_bound(cards, cards + N, find) - lower_bound(cards, cards + N, find) << "\n";
//	}
//}