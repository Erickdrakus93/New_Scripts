#include <iostream>
#include <math.h>

using namespace std;

class Node{
public:
    Node(int d, Node* q= 0): data(d), next(q){};  // Here is important to use the init 0 //
    int data;
    Node* next; // THis is the artificial part of the main example.

};

// Here we have the main test function

int main(void) {
    int n;
    Node *ptr;
    Node *q = 0;  // This is the init process
    while (cin >> n) { /* This a form to performe the node */
        ptr = new Node(n, q);
        q = ptr; // Here we are muting the variable that allocates the node data type
    }
    for (0; ptr->next; ptr = ptr->next) {
        cout << ptr->data << "->"; // Here we have the end of the equation
    }
    cout << "*\n";
}