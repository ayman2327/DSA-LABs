//#include <iostream>
//#include <queue>
//using namespace std;
//class TicketSystem {
//private:
//    queue<int> tickets;
//public:
//    void enqueue(int ticket_id) {
//        if (ticket_id < 1000 || ticket_id > 9999) {
//            cout << "Invalid Ticket ID! Enter a 4-digit ID.\n";
//            return;
//        }
//        tickets.push(ticket_id);
//        cout << "Ticket " << ticket_id << " added successfully.\n";
//    }
//    void dequeue() {
//        if (tickets.empty()) {
//            cout << "No pending tickets to resolve.\n";
//            return;
//        }
//        cout << "Ticket " << tickets.front()
//            << " has been resolved.\n";
//        tickets.pop();
//    }
//    void front() {
//        if (tickets.empty()) {
//            cout << "No pending tickets.\n";
//            return;
//        }
//        cout << "Next ticket to resolve: "
//            << tickets.front() << endl;
//    }
//    void display() {
//        if (tickets.empty()) {
//            cout << "No pending tickets.\n";
//            return;
//        }
//        queue<int> temp = tickets;
//        cout << "Pending Tickets: ";
//        while (!temp.empty()) {
//            cout << temp.front() << " ";
//            temp.pop();
//        }
//        cout << endl;
//    }
//};
//int main() {
//    TicketSystem ts;
//    int choice, ticket_id;
//    do {
//        cout << "\n===== CUSTOMER SUPPORT TICKET SYSTEM =====\n";
//        cout << "1. Add New Ticket\n";
//        cout << "2. Resolve Ticket\n";
//        cout << "3. Next Ticket\n";
//        cout << "4. Display Pending Tickets\n";
//        cout << "5. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice) {
//        case 1:
//            cout << "Enter 4-digit Ticket ID: ";
//            cin >> ticket_id;
//            ts.enqueue(ticket_id);
//            break;
//        case 2:
//            ts.dequeue();
//            break;
//        case 3:
//            ts.front();
//            break;
//        case 4:
//            ts.display();
//            break;
//        case 5:
//            cout << "Exiting Ticket System...\n";
//            break;
//        default:
//            cout << "Invalid choice! Try again.\n";
//        }
//    } 
//    while (choice != 5);
//    return 0;
//}
