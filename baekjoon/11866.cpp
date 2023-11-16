//#include <iostream>
//
//
//
//using namespace std;
//
//class Node {
//public:
//	int num;
//	Node* next;
//	Node* before;
//	Node(int num) {
//		this->num = num;
//		this->next = NULL;
//		this->before = NULL;
//	}
//};
//
//class CLL {
//public:
//	Node* head;
//	Node* tail;
//	Node* curr;
//	int size;
//	void add(Node* node) {
//		if (size == 0) {
//			this->head = node;
//			this->tail = node;
//			this->curr = head;
//			this->size++;
//			return;
//		}
//		this->tail->next = node;
//		this->tail->next->before = tail;
//		this->tail = node;
//
//		this->tail->next = head;
//		this->head->before = tail;
//		this->size++;
//		return;
//	}
//
//	void del() {
//		if (size == 1) {
//			this->head = NULL;
//			this->tail = NULL;
//			this->curr = NULL;
//			this->size--;
//			return;
//		}
//		this->curr->before->next = this->curr->next;
//		this->curr->next->before = this->curr->before;
//		this->size--;
//		this->curr = this->curr->next;
//		return;
//
//	}
//	CLL() {
//		this->head = NULL;
//		this->tail = NULL;
//		this->curr = NULL;
//		this->size = 0;
//	}
//};
//
//void josephus(CLL cll, int K) {
//	while(cll.size != 0) {
//		for (int j = 0; j < K-1; j++) {
//			cll.curr = cll.curr->next;
//		}
//		cout << cll.curr->num;
//		cll.del();
//		if (cll.size != 0)
//			cout << ", ";
//	}
//}
//
//int main() {
//	int N, K;
//	CLL cll;
//	cin >> N >> K;
//	for (int i = 0; i < N; i++) {
//		Node* node = new Node(i + 1);
//		cll.add(node);
//	}
//	cout << "<";
//	josephus(cll, K);
//	cout << ">";
//}