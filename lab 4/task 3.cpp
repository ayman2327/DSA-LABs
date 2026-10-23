
#include <iostream>
using namespace std;
class myCarStack {
public:
    string car[8];
    int top;
    myCarStack() {
        top = -1;
    }
    void park(string c) {
        if (top == 7)
            cout << "Parking Full!\n";
        else {
            top++;
            car[top] = c;
            cout << "Car Parked!\n";
        }
    }
    void display() {
        if (top == -1) {
            cout << "Parking Empty!\n";
            return;
        }
        for (int i = top; i >= 0; i--)
            cout << car[i] << endl;
    }
    void count() {
        cout << "Total Cars: " << top + 1 << endl;
    }
    void search(string c) {
        for (int i = 0; i <= top; i++) {
            if (car[i] == c) {
                cout << "Car Found!\n";
                return;
            }
        }
        cout << "Car Not Found!\n";
    }
    void remove(string c) {
        string temp[8];
        int t = -1;
        bool found = false;

        while (top >= 0) {
            if (car[top] == c) {
                top--;
                found = true;
                break;
            }
            temp[++t] = car[top];
            top--;
        }
        while (t >= 0) {
            car[++top] = temp[t--];
        }
        if (found)
            cout << "Car Removed!\n";
        else
            cout << "Car Not Found!\n";
    }
};
int main() {
    myCarStack p;
    int choice;
    string c;
    do {
        cout << "\n1. Park Car\n";
        cout << "2. Remove Car\n";
        cout << "3. Display Cars\n";
        cout << "4. Count Cars\n";
        cout << "5. Search Car\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter car number: ";
            cin >> c;
            p.park(c);
            break;
        case 2:
            cout << "Enter car number: ";
            cin >> c;
            p.remove(c);
            break;
        case 3:
            p.display();
            break;
        case 4:
            p.count();
            break;
        case 5:
            cout << "Enter car number: ";
            cin >> c;
            p.search(c);
            break;
        case 0:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Wrong choice!\n";
        }
    } while (choice != 0);
    return 0;
}
