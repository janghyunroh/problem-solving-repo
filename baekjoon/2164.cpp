//#include <iostream>
//using namespace std;
//class Card {
//public:
//	Card(int n) {
//		this->num = n;
//	}
//	int num;
//	Card* next;
//};
//
//class Cards {
//public:
//	Cards(int N) {
//		this->size = N;
//		Card* cur = new Card(0);	// 노드 연결용 더미 노드
//		for (int i = 1; i <= N; i++) {
//			
//			Card* card = new Card(i);
//			cur->next = card;
//			if (i == N) bottom = card;
//			else {
//				if (i == 1) top = card;
//			}
//			cur = card;	
//		}
//	}
//	int size;
//	Card* top;
//	Card* bottom;
//
//	void pop() {
//		top = top->next;
//	}
//
//	void push() {
//		if(top == bottom) cout << top->num;
//		else {
//			bottom->next = top;
//			top = top->next;
//			bottom = bottom->next;
//			bottom->next = NULL;
//		}
//		
//	}
//
//	void print() {
//		if (this->size == 1) {
//			cout << 1;
//			return;
//		}
//		for (int i = 0; i < size - 1; i++) {
//			pop();
//			push();
//		}
//	}
//};
//
//int main() {
//	int N;
//	cin >> N;
//	Cards* cards = new Cards(N);
//	cards->print();
//}