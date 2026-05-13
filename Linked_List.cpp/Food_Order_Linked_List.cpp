#include <iostream>
using namespace std;

class Node {

public:
    string food;
    Node* next;
};

int main() {

    Node* f1 = new Node();
    Node* f2 = new Node();

    f1->food = "Burger";
    f1->next = f2;

    f2->food = "Pizza";
    f2->next = NULL;

    Node* temp = f1;

    while(temp != NULL) {

        cout << temp->food << endl;

        temp = temp->next;
    }

    return 0;
}
