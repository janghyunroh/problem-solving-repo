//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std; 
//
//bool isBalanced(string s) {
//	stack<char> stack;
//	for (int i = 0; i < s.length(); i++) {
//
//		
//		if (s[i] != '(' && s[i] != '[' && s[i] != ')' && s[i] != ']')	continue;			//�ƹ� ��� ���� ������ ���
//		else if (s[i] == '(' || s[i] == '[')							stack.push(s[i]);	// ( �� [ �Էµ� ���
//		else if (s[i] == ')' && !stack.empty() && stack.top() == '(')	stack.pop();		// ) �Էµ� ���(���� ���� �Ǻ� ���� pop)
//		else if (s[i] == ']' && !stack.empty() && stack.top() == '[')	stack.pop();		// ] �Էµ� ���(���� ���� �Ǻ� ���� pop)
//		
//		else return false;	// ���� ���̽� : )�� ] �� �Էµǰ� ������ ���ΰ� ������ ���� �ʰų� ������ ����ִ� ���
//			
//	}
//	//������ ������� ���� ���
//	if (!stack.empty()) return false;
//	
//	return true;
//
//}
//
//
//int main() {
//	string s;
//	while (true) {
//		getline(cin, s);
//		if (s == ".") return 0;
//		if (isBalanced(s)) cout << "yes" << endl;
//		else cout << "no" << endl;
//	}
//}