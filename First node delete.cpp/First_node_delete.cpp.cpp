#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void deleteFirst() {
    if (head == NULL) {
        cout << "List empty";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}
