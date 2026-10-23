//
//#include <iostream>
//using namespace std;
//template <class T>
//class AbstractStack {
//public:
//    virtual void push(T x) = 0;
//    virtual T pop() = 0;
//    virtual T top() const = 0;
//    virtual bool isEmpty() const = 0;
//    virtual bool isFull() const = 0;
//    virtual ~AbstractStack() {}
//};
//template <class T>
//class myStack : public AbstractStack<T> {
//    T a[100], m[100];
//    int t, size;
//public:
//    myStack(int s) {
//        size = s;
//        t = -1;
//    }
//    void push(T x) {
//        if (isFull()) {
//            cout << "Stack Full\n";
//            return;
//        }
//        t++;
//        a[t] = x;
//
//        if (t == 0 || x < m[t - 1])
//            m[t] = x;
//        else
//            m[t] = m[t - 1];
//    }
//    T pop() {
//        if (isEmpty()) {
//            cout << "Stack Empty\n";
//            return T{};
//        }
//        return a[t--];
//    }
//    T top() const {
//        return a[t];
//    }
//    bool isEmpty() const {
//        return t == -1;
//    }
//    bool isFull() const {
//        return t == size - 1;
//    }
//    T getMin() const {
//        return m[t];
//    }
//    void display() const {
//        for (int i = t; i >= 0; i--)
//            cout << a[i] << endl;
//    }
//};
//int main() {
//    myStack<int> s(100);
//    int choice, x;
//    do {
//        cout << "\n1. Push\n2. Pop\n3. Top\n";
//        cout << "4. Empty\n5. Full\n6. Display\n";
//        cout << "7. Minimum\n8. Exit\n";
//        cin >> choice;
//        switch (choice) {
//        case 1:
//            cout << "Enter value: ";
//            cin >> x;
//            s.push(x);
//           break;
//        case 2:
//            if (!s.isEmpty())
//                cout << s.pop() << endl;
//            else
//                cout << "Stack Empty\n";
//            break;
//        case 3:
//            if (!s.isEmpty())
//                cout << s.top() << endl;
//            else
//                cout << "Stack Empty\n";
//            break;
//        case 4:
//            cout << s.isEmpty() << endl;
//            break;
//        case 5:
//            cout << s.isFull() << endl;
//            break;
//        case 6:
//            s.display();
//            break;
//        case 7:
//            if (!s.isEmpty())
//                cout << "Minimum: " << s.getMin() << endl;
//            else
//                cout << "Stack Empty\n";
//            break;
//        case 8:
//            cout << "Exit\n";
//            break;
//        default:
//            cout << "Invalid choice\n";
//        }
//    } while (choice != 8);
//    return 0;
//}
