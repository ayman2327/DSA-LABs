//#include <iostream>
//#include <queue>
//#include <stack>
//using namespace std;
//class Queue {
//private:
//    queue<int> q;
//public:
//    void enqueue(int value) {
//        q.push(value);
//    }
//    void dequeue() {
//        if (!q.empty()) {
//            q.pop();
//        }
//    }
//    int front() {
//        if (!q.empty()) {
//            return q.front();
//        }
//        return -1;
//    }
//    bool isEmpty() {
//        return q.empty();
//    }
//    void reverseFirstK(int k) {
//        int n = q.size();
//
//        if (k <= 1 || k > n) {
//            return;
//        }
//        stack<int> s;
//        for (int i = 0; i < k; i++) {
//            s.push(q.front());
//            q.pop();
//        }
//        while (!s.empty()) {
//            q.push(s.top());
//            s.pop();
//        }
//        for (int i = 0; i < n - k; i++) {
//            q.push(q.front());
//            q.pop();
//        }
//    }
//    void display() {
//        queue<int> temp = q;
//        while (!temp.empty()) {
//            cout << temp.front() << " ";
//            temp.pop();
//        }
//        cout << endl;
//    }
//};
//int main() {
//    Queue q;
//    int n, value, k;
//    cout << "Enter number of elements: ";
//    cin >> n;
//    cout << "Enter queue elements: ";
//    for (int i = 0; i < n; i++) {
//        cin >> value;
//        q.enqueue(value);
//    }
//    cout << "Original Queue: ";
//    q.display();
//    cout << "Enter value of K: ";
//    cin >> k;
//    q.reverseFirstK(k);
//    cout << "Queue after reversing first K elements: ";
//    q.display();
//    return 0;
//}
