//#include <iostream>
//#include <string>
//using namespace std;
//class Node {
//public:
//    int patientID;
//    string patientName;
//    Node* next;
//};
//class HospitalQueue {
//private:
//    Node* head;
//public:
//    HospitalQueue() {
//        head = NULL;
//    }
//     void addPatient(int id, string name) {
//        Node* newNode = new Node;
//        newNode->patientID = id;
//        newNode->patientName = name;
//        newNode->next = NULL;
//        if (head == NULL) {
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//            while (temp->next != NULL) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//        cout << "Patient added successfully!" << endl;
//    }
//    void removePatient(int id) {
//        if (head == NULL) {
//            cout << "Queue is empty!" << endl;
//            return;
//        }
//        Node* temp = head;
//        Node* previous = NULL;  
//        if (head->patientID == id) {
//            head = head->next;
//            delete temp;
//            cout << "Patient removed successfully!" << endl;
//            return;
//        }
//        while (temp != NULL && temp->patientID != id) {
//            previous = temp;
//            temp = temp->next;
//        }
//        if (temp == NULL) {
//            cout << "Patient not found!" << endl;
//            return;
//        }
//        previous->next = temp->next;
//        delete temp;
//        cout << "Patient removed successfully!" << endl;
//    }
//    void displayPatients() {
//        if (head == NULL) {
//            cout << "No patients in the queue!" << endl;
//            return;
//        }
//        Node* temp = head;
//        cout << "PATIENT WAITING LIST " << endl;
//        while (temp != NULL) {
//            cout << "Patient ID: " << temp->patientID << endl;
//            cout << "Patient Name: " << temp->patientName << endl;
//                temp = temp->next;
//        }
//    }
//      void countPatients() {
//        Node* temp = head;
//        int count = 0;
//        while (temp != NULL) {
//            count++;
//            temp = temp->next;
//        }
//        cout << "Total Patients in Queue: " << count << endl;
//    }
//     ~HospitalQueue() {
//        Node* temp;
//        while (head != NULL) {
//            temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//};
//int main() {
//    HospitalQueue hospital;
//    int choice, id;
//    string name;
//    do {
//        cout << " HOSPITAL MANAGEMENT SYSTEM " << endl;
//        cout << "1. Add New Patient" << endl;
//        cout << "2. Remove Patient (Cancel Appointment)" << endl;
//        cout << "3. Display Patient Queue" << endl;
//        cout << "4. Count Total Patients" << endl;
//        cout << "5. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice) {
//        case 1:
//            cout << "Enter Patient ID: ";
//            cin >> id;
//            cout << "Enter Patient Name: ";
//            getline(cin >> ws, name);
//            hospital.addPatient(id, name);
//            break;
//        case 2:
//            cout << "Enter Patient ID to Remove: ";
//            cin >> id;
//            hospital.removePatient(id);
//            break;
//        case 3:
//            hospital.displayPatients();
//            break;
//        case 4:
//            hospital.countPatients();
//            break;
//        case 5:
//            cout << "exiting hospital management system" << endl;
//            break;
//        default:
//            cout << "invalid choice! try again" << endl;
//        }
//    } while (choice != 5);
//    return 0;
//}
