//#include <iostream>
//#include <queue>
//#include <string>
//using namespace std;
//class PrintQueue {
//private:
//    queue<string> documents;
//public:
//    void enqueue(string document_name) {
//        documents.push(document_name);
//        cout << document_name << " added to print queue.\n";
//    }
//    void dequeue() {
//        if (documents.empty()) {
//            cout << "Print queue is empty!\n";
//            return;
//        }
//        cout << "Printing document: " << documents.front() << endl;
//        documents.pop();
//    }
//    void front() {
//        if (documents.empty()) {
//            cout << "No documents in print queue.\n";
//            return;
//        }
//        cout << "Next document to print: "
//            << documents.front() << endl;
//    }
//    void display() {
//        if (documents.empty()) {
//            cout << "Print queue is empty!\n";
//            return;
//        }
//        queue<string> temp = documents;
//        cout << "Pending Print Jobs:\n";
//        while (!temp.empty()) {
//            cout << temp.front() << endl;
//            temp.pop();
//        }
//    }
//};
//int main() {
//    PrintQueue pq;
//    int choice;
//    string document_name;
//    do {
//        cout << "\n===== DOCUMENT PRINTING SYSTEM =====\n";
//        cout << "1. Add Print Job\n";
//        cout << "2. Print Document\n";
//        cout << "3. Next Document\n";
//        cout << "4. Display Print Queue\n";
//        cout << "5. Exit\n";
//
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice) {
//        case 1:
//            cout << "Enter document name: ";
//            cin.ignore();
//            getline(cin, document_name);
//            pq.enqueue(document_name);
//            break;
//        case 2:
//            pq.dequeue();
//            break;
//        case 3:
//            pq.front();
//            break;
//        case 4:
//            pq.display();
//            break;
//        case 5:
//            cout << "Exiting Printing System...\n";
//            break;
//        default:
//            cout << "Invalid choice! Try again.\n";
//        }
//    } while (choice != 5);
//    return 0;
//}
