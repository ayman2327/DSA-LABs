//#include <iostream>
//using namespace std;
//class Node {
//public:
//    int data;
//    Node* next;
//};
//class SinglyLinkedList {
//private:
//    Node* head;
//public:
//      SinglyLinkedList() {
//        head = NULL;
//    }
//    void insert(int value, int pos) {
//        Node* newnode = new Node;
//        newnode->data = value;
//        newnode->next = NULL;
//        if (pos < 1) {
//            cout << "invalid position!" << endl;
//            delete newnode;
//            return;
//        }
//        if (pos == 1) {
//            newnode->next = head;
//            head = newnode;
//            cout << "Node inserted successfully!" << endl;
//            return;
//        }
//        Node* temp = head;
//        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//            temp = temp->next;
//        }
//        if (temp == NULL) {
//            cout << "invalid position!" << endl;
//            delete newnode;
//            return;
//        }
//        newnode->next = temp->next;
//        temp->next = newnode;
//        cout << "Node inserted successfully!" << endl;
//    }
//     void deleteNode(int pos) {
//        if (head == NULL) {
//            cout << "List is Empty!" << endl;
//            return;
//        }
//       if (pos < 1) {
//            cout << "invalid position!" << endl;
//            return;
//        }
//        Node* temp = head;
//        if (pos == 1) {
//            head = head->next;
//            delete temp;
//            cout << "Node deleted successfully!" << endl;
//            return;
//        }
//        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//            temp = temp->next;
//        }
//        if (temp == NULL || temp->next == NULL) {
//            cout << "invalid position!" << endl;
//            return;
//        }
//        Node* del = temp->next;
//        temp->next = del->next;
//        delete del;
//        cout << "Node deleted successfully!" << endl;
//    }
//    void search(int value) {
//        Node* temp = head;
//        int pos = 1;
//        while (temp != NULL) {
//            if (temp->data == value) {
//                cout << "Element found at position: " << pos << endl;
//                return;
//            }
//            temp = temp->next;
//            pos++;
//        }
//        cout << "Element not found!" << endl;
//    }
//      void countNodes() {
//        Node* temp = head;
//        int count = 0;
//        while (temp != NULL) {
//            count++;
//            temp = temp->next;
//        }
//        cout << "Total nodes: " << count << endl;
//    }
//     void display() {
//        Node* temp = head;
//        if (head == NULL) {
//            cout << "List is Empty!" << endl;
//            return;
//        }
//        cout << "Linked List: ";
//        while (temp != NULL) {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//        cout << "NULL" << endl;
//    }
//       ~SinglyLinkedList() {
//        Node* temp;
//
//        while (head != NULL) {
//            temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//};
//int main() {
//    SinglyLinkedList list;
//    int choice, value, pos;
//    do {
//        cout << " SINGLY LINKED LIST " << endl;
//        cout << " Insert Node at Specific Position" << endl;
//        cout << "Delete Node at Specific Position" << endl;
//        cout << " Search Element" << endl;
//        cout << " Count Total Nodes" << endl;
//        cout << " Display List" << endl;
//        cout << " Exit" << endl;
//        cout << "Enter Your Choice: "<<endl;
//        cin >> choice;
//        switch (choice) {
//        case 1:
//            cout << "Enter Value: ";
//            cin >> value;
//            cout << "Enter Position: ";
//            cin >> pos;
//            list.insert(value, pos);
//            break;
//        case 2:
//            cout << "Enter position: ";
//            cin >> pos;
//            list.deleteNode(pos);
//            break;
//        case 3:
//            cout << "Enter value to search: ";
//            cin >> value;
//            list.search(value);
//            break;
//        case 4:
//            list.countNodes();
//            break;
//        case 5:
//            list.display();
//            break;
//        case 6:
//            cout << "Program ended!" << endl;
//            break;
//        default:
//            cout << "Invalid choice!" << endl;
//        }
//
//    } while (choice != 6);
//
//    return 0;
//}
