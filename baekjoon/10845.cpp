//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Node {
//    public:
//    Node(int n) {
//        this->num = n;
//        this->next = NULL;
//        this->before = NULL;
//    }
//    
//    int num;
//    Node* next;
//    Node* before;
//  
//};
//
//class Queue {
//    public:
//    Queue() {
//        this->size = 0;
//        this->head = NULL;
//        this->tail = NULL;
//    }
//    
//    void push(int n) {
//        Node* node = new Node(n);
//        
//        //new case
//        if(this->size==0) {
//            this->head = node;
//            this->tail = node;
//            this->size++;
//            return;
//        }
//        
//        //avg case
//        this->tail->next = node;
//        node->before = this->tail;
//        this->tail = node;
//        this->size++;
//        
//    }
//    
//    int pop() {
//        //no element
//        if(this->size == 0) return -1;
//        
//        int n = this->head->num;
//        
//        //one element
//        if(this->size == 1) {
//            this->head = NULL;
//            this->tail = NULL;
//            this->size--;
//            return n;
//        }
//        
//        //avg case
//        this->head = this->head->next;
//        this->head->before->next = NULL;
//        this->head->before = NULL;
//        this->size--;
//        return n;
//        
//        
//    }
//    
//    int getSize() {    return this->size;  }
//    
//    int empty() {   return this->size == 0 ? 1 : 0;     }
//    
//    int front() {   return this->size == 0 ? -1 : this->head->num;  }
//    
//    int back() {    return this->size == 0 ? -1 : this->tail->num;  }
//    
//    int size;
//    Node* head;
//    Node* tail;
//    
//};
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int N;
//    string s;
//    Queue* queue = new Queue(); 
//    cin >> N;
//    for(int i=0;i<N;i++) {
//        cin >> s;
//        if(s == "push") {
//            int n;
//            cin >> n;
//            queue->push(n);
//        }
//        else if(s == "pop") {   cout << queue->pop() << "\n";       }
//        else if(s == "size") {  cout << queue->getSize() << "\n";   }
//        else if(s == "empty") { cout << queue->empty() << "\n";     }
//        else if(s == "front") { cout << queue->front() << "\n";     }
//        else if(s == "back") {  cout << queue->back() << "\n";      }
//    }
//}