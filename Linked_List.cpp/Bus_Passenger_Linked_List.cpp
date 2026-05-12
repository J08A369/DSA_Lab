#include <iostream>
using namespace std;

class Node {

public:
    string passenger;
    Node* next;
};

int main() {

    Node* p1 = new Node();
    Node* p2 = new Node();

    p1->passenger = "Rahim";
    p1->next = p2;

    p2->passenger = "Karim";
    p2->next = NULL;

    Node* temp = p1;

    while(temp != NULL) {

        cout << temp->passenger << endl;

        temp = temp->next;
    }

    return 0;
}
