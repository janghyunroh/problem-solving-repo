//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Stack {
//private:
//	vector<int> stack;
//	int top;
//	int size;
//
//
//public:
//	void push(int n) {
//		this->stack.push_back(n);
//		top++;
//		size++;
//	}
//	
//	int pop() {
//		if (top == -1)
//			return -1;
//		int n = this->stack[top];
//		this->stack.pop_back();
//		top--;
//		size--;
//		return n;
//	}
//
//	int getSize() {
//		return this->size;
//	}
//
//	int empty() {
//		return this->size == 0 ? 1 : 0;
//	}
//	int getTop() {
//		if (this->top == -1)
//			return -1;
//		return this->stack[top];
//	}
//
//	Stack() {
//		this->top = -1;
//		this->size = 0;
//	}
//
//
//};
//
//int main() {
//	Stack stack;
//	int N;
//	cin >> N;
//	for(int i=0;i<N;i++) {
//		string s;
//		cin >> s;
//		if (s == "push") {
//			int n;
//			cin >> n;
//			stack.push(n);
//		}
//		else if (s == "pop") {
//			cout << stack.pop() << endl;
//		}
//		else if (s == "size") {
//			cout << stack.getSize() << endl;
//		}
//		else if (s == "empty") {
//			cout << stack.empty() << endl;
//		}
//		else if (s == "top") {
//			cout << stack.getTop() << endl;
//		}
//	}
//}