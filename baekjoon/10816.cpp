//#include <iostream>
//#include <algorithm>
///*
//정렬 밒 이진 탐색  문제 -> lower/upper bound와 sort 사용
//*/
//
//using namespace std;
//
//int main() {
//
//	//속도 향상 위한 작업
//	ios_base::sync_with_stdio(false);	//stdio 동기화 해제
//	cin.tie(NULL);						
//	cout.tie(NULL);						//cin, cout의 tie 해제
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