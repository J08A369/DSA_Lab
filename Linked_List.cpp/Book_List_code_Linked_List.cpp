#include <iostream>
using namespace std;

class Node {

public:
    string book;
    Node* next;
};

int main() {

    Node* b1 = new Node();
    Node* b2 = new Node();

    b1->book = "Math";
    b1->next = b2;

    b2->book = "Physics";
    b2->next = NULL;

    Node* temp = b1;

    while(temp != NULL) {

        cout << temp->book << endl;

        temp = temp->next;
    }

    return 0;
}
