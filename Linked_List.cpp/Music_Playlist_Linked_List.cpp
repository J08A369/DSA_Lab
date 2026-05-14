#include <iostream>
using namespace std;

class Node {

public:
    string song;
    Node* next;
};

int main() {

    Node* s1 = new Node();
    Node* s2 = new Node();

    s1->song = "Song One";
    s1->next = s2;

    s2->song = "Song Two";
    s2->next = NULL;

    Node* temp = s1;

    while(temp != NULL) {

        cout << temp->song << endl;

        temp = temp->next;
    }

    return 0;
}
