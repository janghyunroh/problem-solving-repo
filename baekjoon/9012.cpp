//#include <iostream>
//#include <string>
//using namespace std;
//
//void test(string s) {
//	int oCnt = 0, cCnt = 0;
//	for (int i = 0; i < s.size(); i++) {	// ) ������ (�� �Ѿ�� ���
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
//	if (oCnt != cCnt) {	// )�� �� ������ (���� ������ ���
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