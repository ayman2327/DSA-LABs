//#include <iostream>
//#include <string>
//using namespace std;
//class Node {
//public:
//    int studentID;
//    string studentName;
//    int priority;
//    Node* next;
//};
//class ReservationQueue {
//private:
//    Node* head;
//public:
//      ReservationQueue() {
//        head = NULL;
//    }
//    void addStudent(int id, string name, int p) {
//        Node* newNode = new Node;
//        newNode->studentID = id;
//        newNode->studentName = name;
//        newNode->priority = p;
//        newNode->next = NULL;
//          if (head == NULL) {
//            head = newNode;
//        }
//        else if (p < head->priority) {
//            newNode->next = head;
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//
//            while (temp->next != NULL &&
//                temp->next->priority <= p) {
//                temp = temp->next;
//            }
//            newNode->next = temp->next;
//            temp->next = newNode;
//        }
//        cout << "Student added successfully!" << endl;
//    }
//      void removeStudent(int id) {
//        if (head == NULL) {
//            cout << "Reservation list is empty!" << endl;
//            return;
//        }
//        Node* temp = head;
//        Node* previous = NULL;
//        while (temp != NULL && temp->studentID != id) {
//            previous = temp;
//            temp = temp->next;
//        }
//        if (temp == NULL) {
//            cout << "Student not found!" << endl;
//            return;
//        }
//        if (previous == NULL) {
//            head = head->next;
//        }
//        else {
//            previous->next = temp->next;
//        }
//        delete temp;
//
//        cout << "Reservation cancelled successfully!" << endl;
//    }
//      void updatePriority(int id, int newPriority) {
//        if (newPriority < 1 || newPriority > 3) {
//            cout << "Invalid priority!" << endl;
//            return;
//        }
//        if (head == NULL) {
//            cout << "Reservation list is empty!" << endl;
//            return;
//        }
//        Node* temp = head;
//        Node* previous = NULL;
//           while (temp != NULL && temp->studentID != id) {
//            previous = temp;
//            temp = temp->next;
//        }
//
//        if (temp == NULL) {
//            cout << "Student not found!" << endl;
//            return;
//        }
//            string name = temp->studentName;
//             if (previous == NULL) {
//            head = head->next;
//        }
//        else {
//            previous->next = temp->next;
//        }
//        delete temp;
//             addStudent(id, name, newPriority);
//        cout << "Priority updated successfully!" << endl;
//    }
//     void display() {
//        if (head == NULL) {
//            cout << "No reservations available!" << endl;
//            return;
//        }
//        Node* temp = head;
//        cout << "\n===== RESERVATION LIST =====" << endl;
//        while (temp != NULL) {
//            cout << "Student ID: " << temp->studentID << endl;
//            cout << "Student Name: " << temp->studentName << endl;
//            cout << "Priority: ";
//            if (temp->priority == 1)
//                cout << "Research";
//            else if (temp->priority == 2)
//                cout << "Assignment";
//            else
//                cout << "Casual Reading";
//            cout << endl;
//                   temp = temp->next;
//        }
//    }
//    void countStudents() {
//        Node* temp = head;
//        int count = 0;
//        while (temp != NULL) {
//            count++;
//            temp = temp->next;
//        }
//        cout << "Total Students: " << count << endl;
//    }
//    void returnBook() {
//        if (head == NULL) {
//            cout << "No students waiting for this book!" << endl;
//            return;
//        }
//        Node* temp = head;
//        cout << "Book issued to: "
//            << temp->studentName << endl;
//        head = head->next;
//        delete temp;
//        cout << "Student removed from reservation queue!" << endl;
//    }
//        ~ReservationQueue() {
//        Node* temp;
//        while (head != NULL) {
//            temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//};
//int main() {
//    ReservationQueue book1;
//    ReservationQueue book2;
//    int choice, book, id, priority;
//    string name;
//        do {
//        cout << " UNIVERSITY LIBRARY SYSTEM" << endl;
//        cout << "1. Add Student Reservation" << endl;
//        cout << "2. Cancel Student Reservation" << endl;
//        cout << "3. Update Student Priority" << endl;
//        cout << "4. Display Reservation List" << endl;
//        cout << "5. Count Students" << endl;
//        cout << "6. Return Book / Serve Next Student" << endl;
//        cout << "7. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//        if (choice >= 1 && choice <= 6) {
//            cout << "\nSelect Book:" << endl;
//            cout << "1. Data Structures" << endl;
//            cout << "2. Programming in C++" << endl;
//            cout << "Enter book number: ";
//            cin >> book;
//            if (book != 1 && book != 2) {
//                cout << "Invalid book selection!" << endl;
//                continue;
//            }
//        }
//        switch (choice) {
//        case 1:
//            cout << "Enter Student ID: ";
//            cin >> id;
//            cout << "Enter Student Name: ";
//            getline(cin >> ws, name);
//            cout << "Priority Levels:" << endl;
//            cout << "1. Research" << endl;
//            cout << "2. Assignment" << endl;
//            cout << "3. Casual Reading" << endl;
//            cout << "Enter Priority: ";
//            cin >> priority;
//            if (priority < 1 || priority > 3) {
//                cout << "Invalid priority!" << endl;
//                break;
//            }
//            if (book == 1)
//                book1.addStudent(id, name, priority);
//            else
//                book2.addStudent(id, name, priority);
//            break;
//        case 2:
//            cout << "Enter Student ID: ";
//            cin >> id;
//            if (book == 1)
//                book1.removeStudent(id);
//            else
//                book2.removeStudent(id);
//            break;
//        case 3:
//            cout << "Enter Student ID: ";
//            cin >> id;
//            cout << "Enter New Priority (1-3): ";
//            cin >> priority;
//            if (book == 1)
//                book1.updatePriority(id, priority);
//            else
//                book2.updatePriority(id, priority);
//            break;
//        case 4:
//            cout << "Book Reservation Details:" << endl;
//            if (book == 1)
//                book1.display();
//            else
//               book2.display();
//            break;
//        case 5:
//            if (book == 1)
//                book1.countStudents();
//            else
//                book2.countStudents();
//            break;
//        case 6:
//            if (book == 1)
//                book1.returnBook();
//            else
//                book2.returnBook();
//            break;
//        case 7:
//            cout << "Exiting Library System" << endl;
//            break;
//        default:
//            cout << "Invalid Choice!" << endl;
//        }
//    } while (choice != 7);
//    return 0;
//}
