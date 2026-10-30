//#include <iostream>
//#include <stack>
//using namespace std;
//class Queue {
//private:
//    stack<int> stack1, stack2;
//    void transfer() {
//        if (stack2.empty()) {
//            while (!stack1.empty()) {
//                stack2.push(stack1.top());
//                stack1.pop();
//            }
//        }
//    }
//public:
//    void enqueue(int value) {
//        stack1.push(value);
//        cout << value << " inserted into queue.\n";
//    }
//    int dequeue() {
//        transfer();
//        if (stack2.empty()) {
//            cout << "Queue is empty!\n";
//            return -1;
//        }
//        int value = stack2.top();
//        stack2.pop();
//        return value;
//    }
//    int frontElement() {
//        transfer();
//        if (stack2.empty()) {
//            cout << "Queue is empty!\n";
//            return -1;
//        }
//        return stack2.top();
//    }
//    void display() {
//        if (stack1.empty() && stack2.empty()) {
//            cout << "Queue is empty!\n";
//            return;
//        }
//        cout << "Queue elements: ";
//        stack<int> temp2 = stack2;
//        while (!temp2.empty()) {
//            cout << temp2.top() << " ";
//            temp2.pop();
//        }
//        stack<int> temp1 = stack1;
//        stack<int> temp3;
//        while (!temp1.empty()) {
//            temp3.push(temp1.top());
//            temp1.pop();
//        }
//        while (!temp3.empty()) {
//            cout << temp3.top() << " ";
//            temp3.pop();
//        }
//        cout << endl;
//    }
//};
//int main() {
//    Queue q;
//    int choice;
//     int value;
//    do {
//        cout << "\n----- QUEUE USING TWO STACKS -----\n";
//        cout << "1. Enqueue\n";
//        cout << "2. Dequeue\n";
//        cout << "3. Front Element\n";
//        cout << "4. Display Elements\n";
//        cout << "5. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice) {
//        case 1:
//            cout << "Enter value: ";
//            cin >> value;
//            q.enqueue(value);
//            break;
//        case 2:
//            value = q.dequeue();
//            if (value != -1)
//                cout << "Dequeued element: " << value << endl;
//            break;
//        case 3:
//            value = q.frontElement();
//            if (value != -1)
//                cout << "Front element: " << value << endl;
//            break;
//        case 4:
//            q.display();
//            break;
//        case 5:
//            cout << "Exiting program...\n";
//            break;
//        default:
//            cout << "Invalid choice! Try again.\n";
//        }
//    } while (choice != 5);
//    return 0;
//}
