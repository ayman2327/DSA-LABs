//#include <iostream>
//using namespace std;
//class Node
//{
//public:
//    int data;
//    Node* next;
//};
//class LinkedList
//{
//private:
//    Node* head;
//public:
//      LinkedList()
//    {
//        head = nullptr;
//    } 
//    void InsertBeginning(int value)
//    {
//        Node* newNode = new Node;
//
//        newNode->data = value;
//        newNode->next = head;
//        head = newNode;
//    }
//        void InsertEnd(int value)
//    {
//        Node* newNode = new Node;
//        newNode->data = value;
//        newNode->next = nullptr;
//        if (head == nullptr)
//        {
//            head = newNode;
//        }
//        else
//        {
//            Node* temp = head;
//            while (temp->next != nullptr)
//            {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//    }
//        void DeleteNode(int value)
//    {
//        if (head == nullptr)
//        {
//            cout << "List is empty!" << endl;
//            return;
//        }
//
//        if (head->data == value)
//        {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//            cout << "Node deleted!" << endl;
//            return;
//        }
//        Node* temp = head;
//        while (temp->next != nullptr &&
//            temp->next->data != value)
//        {
//            temp = temp->next;
//        }
//        if (temp->next == nullptr)
//        {
//            cout << "Value not found!" << endl;
//        }
//        else
//        {
//            Node* del = temp->next;
//            temp->next = del->next;
//            delete del;
//            cout << "Node deleted!" << endl;
//        }
//    }
//    void Display()
//    {
//        Node* temp = head;
//        if (head == nullptr)
//        {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        while (temp != nullptr)
//        {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//        cout << "NULL" << endl;
//    }
//};
//int main()
//{
//    LinkedList list;
//    list.InsertBeginning(20);
//    list.InsertBeginning(10);
//    list.InsertEnd(30);
//    list.InsertEnd(40);
//    cout << "Linked List:" << endl;
//    list.Display();
//    cout << "\nAfter deleting 20:" << endl;
//    list.DeleteNode(20);
//    list.Display();
//        return 0;
//}
