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
//	//stack���� ���� ���� ���� ���� �Ǻ�
//	stack<int> s;	//���� ����
//	vector<char> v;	//��¿� ����
//
//	int j = 0; //arr�� index
//	int k = 0; //���� stack�� top
//	int check = 1;	// ���� push �ȵ� ����
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
//			j++;	//��ġ�����Ƿ� �ε��� �̵�
//		}
//
//		else if( k > arr[j]) {	//�Ұ����� ���̽��� �߰ߵ� ���
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