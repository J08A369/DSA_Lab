#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* next;
};

// Function to insert at end
void insertAtEnd(Node* &head, int value)
{
    // create new node
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    // if list empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // go to last node
    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // insert at end
    temp->next = newNode;
}

// print list
void printList(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    printList(head);

    return 0;
}
