#include <iostream>
using namespace std;

class LinkedList {

    // Node
    class Node {
    public:
        int data;
        Node* next;

        Node(int value) {
            data = value;
            next = nullptr;
        }
    };

    Node* head;

public:

    // Constructor
    LinkedList() {
        head = nullptr;
    }


    // 1. Insert at Beginning
    void insertAtBeginning(int value) {

        Node* newNode = new Node(value);

        newNode->next = head;
        head = newNode;
    }


    // 2. Insert at End
    void insertAtEnd(int value) {

        Node* newNode = new Node(value);

        // Agar list empty hai
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }


    // 3. Insert at Position
    void insertAtPosition(int position, int value) {

        if (position == 1) {
            insertAtBeginning(value);
            return;
        }

        Node* temp = head;

        // position-1 node tak jao
        for (int i = 1; i < position - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Invalid position\n";
            return;
        }

        Node* newNode = new Node(value);

        newNode->next = temp->next;
        temp->next = newNode;
    }


    // 4. Delete from Beginning
    void deleteAtBeginning() {

        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        head = head->next;

        delete temp;
    }


    // 5. Delete from End
    void deleteAtEnd() {

        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        // Sirf ek node hai
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node* temp = head;

        while (temp->next->next != nullptr) {
            temp = temp->next;
        }

        delete temp->next;

        temp->next = nullptr;
    }


    // 6. Delete from Position
    void deleteAtPosition(int position) {

        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        if (position == 1) {
            deleteAtBeginning();
            return;
        }

        Node* temp = head;

        for (int i = 1; i < position - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr) {
            cout << "Invalid position\n";
            return;
        }

        Node* nodeToDelete = temp->next;

        temp->next = nodeToDelete->next;

        delete nodeToDelete;
    }


    // 7. Search
    bool search(int value) {

        Node* temp = head;

        while (temp != nullptr) {

            if (temp->data == value)
                return true;

            temp = temp->next;
        }

        return false;
    }


    // 8. Length
    int length() {

        int count = 0;

        Node* temp = head;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        return count;
    }


    // 9. Display
    void display() {

        Node* temp = head;

        while (temp != nullptr) {

            cout << temp->data << " -> ";

            temp = temp->next;
        }

        cout << "NULL\n";
    }
};


int main() {

    LinkedList list;

    list.insertAtBeginning(20);
    list.insertAtBeginning(10);

    list.insertAtEnd(30);
    list.insertAtEnd(40);

    list.insertAtPosition(3, 25);

    list.display();

    cout << "Length: " << list.length() << endl;

    cout << "Search 25: "
         << (list.search(25) ? "Found" : "Not Found")
         << endl;

    list.deleteAtBeginning();

    list.deleteAtEnd();

    list.deleteAtPosition(2);

    list.display();

    return 0;
}