#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void addStart(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void addEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;  
    while (temp->next != nullptr) {
        temp = temp->next; 
    }
    temp = temp->next;

}

void printList(Node* head) {
    for (Node* temp = head; temp != nullptr; temp = temp->next) {
        std::cout << temp->data;
    }
}

int main() {

    addStart(0);
    addStart(1);
    addStart(2);
    addStart(3);
    addEnd(10);

    printList(head);

    return 0;
}



