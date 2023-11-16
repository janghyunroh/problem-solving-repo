//#include <iostream>
//#include <string>
//using namespace std;
//
//void test(string s) {
//	int oCnt = 0, cCnt = 0;
//	for (int i = 0; i < s.size(); i++) {	// ) 개수가 (를 넘어가는 경우
//		if (s[i] == '(')
//			oCnt++;
//		else if (s[i] == ')')
//			if (cCnt >= oCnt) {
//				cout << "NO" << endl;
//				return;
//			}
//			else {
//				cCnt++;
//			}
//	}
//	if (oCnt != cCnt) {	// )의 총 개수가 (보다 부족한 경우
//		cout << "NO" << endl;
//		return;
//	}
//	cout << "YES" << endl;
//	return;
//}
//
//int main() {
//	int T;
//	cin >> T;
//
//	string* s = new string[T];
//	for (int i = 0; i < T; i++) {
//		cin >> s[i];
//		test(s[i]);
//	}
//		
//
//
//}