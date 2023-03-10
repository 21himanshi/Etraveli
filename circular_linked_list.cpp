#include <iostream>
using namespace std;

// node structure
struct Node {
    int data;
    Node* next;
};

// function to print all nodes in circular linked list
void printCircularLinkedList(Node* head) {
    if (head == NULL) {
        return;
    }
    Node* curr = head;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}

// main function
int main() {
    // creating a circular linked list with 4 nodes
    Node* head = new Node();
    head->data = 1;
    Node* node2 = new Node();
    node2->data = 2;
    Node* node3 = new Node();
    node3->data = 3;
    Node* node4 = new Node();
    node4->data = 4;
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = head;

    // printing all nodes in circular linked list
    cout << "Nodes in circular linked list: ";
    printCircularLinkedList(head);

    return 0;
}