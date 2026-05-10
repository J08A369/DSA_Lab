#include <iostream>
using namespace std;

class Node {

public:
    string name;
    Node* next;
};

int main() {

    Node* student1 = new Node();
    Node* student2 = new Node();

    student1->name = "Asia";
    student1->next = student2;

    student2->name = "Nila";
    student2->next = NULL;

    Node* temp = student1;

    while(temp != NULL) {

        cout << temp->name << endl;

        temp = temp->next;
    }

    return 0;
}
