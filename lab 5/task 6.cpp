//#include <iostream>
//#include <queue>
//#include <string>
//using namespace std;
//struct Package {
//    int id;
//    string address;
//    int startTime;
//    int endTime;
//};
//class DeliverySystem {
//private:
//    queue<Package> q;
//public:
//    void enqueue(int id, string address, int start, int end) {
//        Package p;
//        p.id = id;
//        p.address = address;
//        p.startTime = start;
//        p.endTime = end;
//        q.push(p);
//        cout << "Package added successfully!\n";
//    }
//    void dequeue() {
//        if (q.empty()) {
//            cout << "No packages available!\n";
//            return;
//        }
//        cout << "Package " << q.front().id
//            << " delivered successfully!\n";
//
//        q.pop();
//    }
//    void front() {
//        if (q.empty()) {
//            cout << "No packages available!\n";
//            return;
//        }
//        cout << "Package ID: " << q.front().id << endl;
//        cout << "Address: " << q.front().address << endl;
//        cout << "Start Time: " << q.front().startTime << endl;
//        cout << "End Time: " << q.front().endTime << endl;
//    }
//    void display() {
//        if (q.empty()) {
//            cout << "No pending packages!\n";
//            return;
//       }
//        queue<Package> temp = q;
//        while (!temp.empty()) {
//            cout << "\nPackage ID: " << temp.front().id;
//            cout << "\nAddress: " << temp.front().address;
//            cout << "\nStart Time: " << temp.front().startTime;
//            cout << "\nEnd Time: " << temp.front().endTime << endl;
//
//            temp.pop();
//        }
//    }
//    void timeToDeliver(int currentTime) {
//        if (q.empty()) {
//            cout << "No packages available!\n";
//            return;
//        }
//        while (!q.empty()) {
//            if (currentTime < q.front().startTime) {
//                cout << "Package " << q.front().id
//                    << " delivery time has not started yet.\n";
//                return;
//            }
//            if (currentTime > q.front().endTime) {
//                cout << "Package " << q.front().id
//                    << " has expired!\n";
//                q.pop();
//            }
//            else {
//                cout << "Package " << q.front().id
//                    << " can be delivered now.\n";
//                return;
//            }
//        }
//        cout << "No pending packages!\n";
//    }
//};
//int main() {
//    DeliverySystem d;
//    int choice, id, start, end, currentTime;
//    string address;
//    do {
//        cout << "\n===== PACKAGE DELIVERY SYSTEM =====\n";
//        cout << "1. Add Package\n";
//        cout << "2. Deliver Package\n";
//        cout << "3. Front Package\n";
//        cout << "4. Display Packages\n";
//        cout << "5. Check Delivery Time\n";
//        cout << "6. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//        switch (choice) {
//        case 1:
//            cout << "Enter Package ID: ";
//            cin >> id;
//            cin.ignore();
//            cout << "Enter Address: ";
//            getline(cin, address);
//            cout << "Enter Start Time (24-hour format): ";
//            cin >> start;
//            cout << "Enter End Time (24-hour format): ";
//            cin >> end;
//            d.enqueue(id, address, start, end);
//            break;
//        case 2:
//            d.dequeue();
//            break;
//        case 3:
//            d.front();
//            break;
//        case 4:
//            d.display();
//            break;
//        case 5:
//            cout << "Enter Current Time: ";
//            cin >> currentTime;
//            d.timeToDeliver(currentTime);
//            break;
//        case 6:
//            cout << "Exiting Program...\n";
//            break;
//        default:
//            cout << "Invalid Choice!\n";
//        }
//    } while (choice != 6);
//    return 0;
//}
