//#include <iostream>
//#include <stack>
//#include <vector>
//
//using namespace std;
///*
//	2 1       5 4       8 7 6 3 
//1 2 2 1 3 4 5 5 4 6 7 8 8 7 6 3 
//
//*/
//
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//
//
//
//
//	//input
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++) cin >> arr[i];
//
//	//stack으로 수열 생성 가능 여부 판별
//	stack<int> s;	//계산용 스택
//	vector<char> v;	//출력용 벡터
//
//	int j = 0; //arr의 index
//	int k = 0; //현재 stack의 top
//	int check = 1;	// 아직 push 안된 정수
//	while (true) {
//		if (k < arr[j]) {
//			while (true) {
//				if (check > arr[j]) break;
//				s.push(check);
//				k = check;
//				v.push_back('+');
//				check++;
//
//			}
//		}
//
//		else if (k == arr[j]) {
//			s.pop();
//			v.push_back('-');
//			k = (s.empty() ? 0 :s.top());
//			j++;	//일치했으므로 인덱스 이동
//		}
//
//		else if( k > arr[j]) {	//불가능한 케이스가 발견된 경우
//			cout << "NO" << "\n";
//			return 0;
//		}
//
//		//
//		if (j == n) break;
//	}
//
//
//	//
//	for (char c : v) {
//		cout << c << "\n";
//	}
//
//	return 0;
//
//
//}