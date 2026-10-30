//
//#include <iostream>
//using namespace std;
//template <typename T>
//class AbstractQueue {
//public:
//    virtual void enQueue(T value) = 0;
//    virtual T deQueue() = 0;
//    virtual T front() const = 0;
//    virtual bool isEmpty() const = 0;
//    virtual bool isFull() const = 0;
//
//    virtual ~AbstractQueue() {}
//};
//template <typename T>
//class myQueue : public AbstractQueue<T> {
//private:
//    T* arr;
//    int size;
//    int count;
//public:
//    myQueue(int s) {
//        size = s;
//        arr = new T[size];
//        count = 0;
//    }
//    ~myQueue() {
//        delete[] arr;
//    }
//    void enQueue(T value) override {
//        if (isFull()) {
//            cout << "Queue is Full!" << endl;
//        }
//        else {
//            arr[count] = value;
//            count++;
//            cout << "Element Added!" << endl;
//        }
//    }
//    T deQueue() override {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//            return T();
//        }
//        T value = arr[0];
//       for (int i = 0; i < count - 1; i++) {
//            arr[i] = arr[i + 1];
//        }
//               count--;
//        return value;
//    }
//    T front() const override {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//            return T();
//        }
//        return arr[0];
//    }
//    bool isEmpty() const override {
//        return count == 0;
//    }
//    bool isFull() const override {
//        return count == size;
//    }
//    void display() const {
//        if (isEmpty()) {
//            cout << "Queue is Empty!" << endl;
//        }
//        else {
//            cout << "Queue Elements: ";
//            for (int i = 0; i < count; i++) {
//                cout << arr[i] << " ";
//            }
//            cout << endl;
//        }
//    }
//};
//    int main() {
//    int size, choice, value;
//
//    cout << "Enter Queue Size: ";
//    cin >> size;
//
//    if (size <= 0) {
//        cout << "Invalid Size!" << endl;
//        return 0;
//    }
//    myQueue<int> q(size);
//    do {
//        cout << "\n===== QUEUE MENU =====" << endl;
//        cout << "1. Enqueue" << endl;
//        cout << "2. Dequeue" << endl;
//        cout << "3. Front" << endl;
//        cout << "4. Is Empty" << endl;
//        cout << "5. Is Full" << endl;
//        cout << "6. Display" << endl;
//        cout << "7. Exit" << endl;
//        cout << "Enter Choice: ";
//        cin >> choice;
//        switch (choice) {
//        case 1:
//            cout << "Enter Value: ";
//            cin >> value;
//            q.enQueue(value);
//            break;
//        case 2:
//            cout << "Removed Element: " << q.deQueue() << endl;
//            break;
//        case 3:
//            cout << "Front Element: " << q.front() << endl;
//            break;
//        case 4:
//            if (q.isEmpty())
//                cout << "Queue is Empty" << endl;
//            else
//                cout << "Queue is Not Empty" << endl;
//            break;
//        case 5:
//            if (q.isFull())
//                cout << "Queue is Full" << endl;
//            else
//                cout << "Queue is Not Full" << endl;
//            break;
//        case 6:
//            q.display();
//            break;
//        case 7:
//            cout << "Program Ended!" << endl;
//            break;
//
//        default:
//            cout << "Invalid Choice!" << endl;
//        }
//    } while (choice != 7);
//    return 0;
//}
