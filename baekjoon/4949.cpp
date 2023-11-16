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
//		if (s[i] != '(' && s[i] != '[' && s[i] != ')' && s[i] != ']')	continue;			//아무 상관 없는 문자인 경우
//		else if (s[i] == '(' || s[i] == '[')							stack.push(s[i]);	// ( 나 [ 입력된 경우
//		else if (s[i] == ')' && !stack.empty() && stack.top() == '(')	stack.pop();		// ) 입력된 경우(균형 여부 판별 이후 pop)
//		else if (s[i] == ']' && !stack.empty() && stack.top() == '[')	stack.pop();		// ] 입력된 경우(균형 여부 판별 이후 pop)
//		
//		else return false;	// 남은 케이스 : )나 ] 가 입력되고 균형이 내부가 균형이 맞지 않거나 스택이 비어있는 경우
//			
//	}
//	//스택이 비어있지 않은 경우
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