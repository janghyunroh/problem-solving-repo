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
//class Deque {
//    
//public:
//    
//    Deque() {
//        this->size = 0;
//        this->head = NULL;
//        this->tail = NULL;
//    }
//    
//    //push
//    void push_front(int n) {
//        
//        Node* node = new Node(n);
//        
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
//        this->head->before = node;
//        node->next = this->head;
//        this->head = node;
//        this->size++;
//        
//    }
//    
//    void push_back(int n) {
//        Node* node = new Node(n);
//        
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
//    //pop
//    int pop_front() {
//        if(this->size==0) return -1;
//        
//        int n = this->head->num;
//        
//        //delete all
//        if(this->size == 1 ) {
//            this->head = NULL;
//            this->tail = NULL;
//            this->size--;
//            
//            return n;
//        }
//        
//        //avg case
//        this->head = this->head->next;
//        this->head->before->next = NULL;
//        this->head->before = NULL;
//        this->size--;
//        
//        return n;
//    }
//    
//    int pop_back() {
//        if(this->size==0) return -1;
//        
//        int n = this->tail->num;
//        
//        //delete all
//        if(this->size == 1 ) {
//            this->head = NULL;
//            this->tail = NULL;
//            this->size--;
//    
//            return n;
//        }
//        
//        //avg case
//        this->tail = this->tail->before;
//        this->tail->next->before = NULL;
//        this->tail->next = NULL;
//        this->size--;
//        
//        return n;
//    }
//    
//    //infos
//    int getSize() {
//        return this->size;
//    }
//    
//    int empty() {
//        return this->size==0?1:0;
//    }
//    
//    int front() {
//        return this->size==0?-1:this->head->num;
//    }
//    
//    int back() {
//        return this->size==0?-1:this->tail->num;
//    }
//    
//    int size;
//    Node* head;
//    Node* tail;
//};
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    Deque* deque = new Deque();
//    int N;
//    string s;
//    cin >> N;
//    for(int i=0;i<N;i++) {
//        cin >> s;
//        if(s == "push_front") {
//            int n;
//            cin >> n;
//            deque->push_front(n);
//        }
//        
//        else if(s=="push_back") {
//            int n;
//            cin >> n;
//            deque->push_back(n);
//        }
//        
//        else if(s == "pop_front") cout << deque->pop_front() << "\n";
//        
//        else if(s == "pop_back") cout << deque->pop_back() << "\n";
//        
//        else if(s == "size") cout << deque->getSize() << "\n";
//        
//        else if(s == "empty") cout << deque->empty() << "\n";
//        
//        else if(s == "front") cout << deque->front() << "\n";
//        
//        else if(s == "back") cout << deque->back() << "\n";
//        
//
//        
//    }
//}
//
