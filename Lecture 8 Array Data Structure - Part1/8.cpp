#include <iostream>
using namespace std;

struct node
{
    int data;
    node *link; // pointer to othet node i.e next node itsels structure
};

int main()
{
    node *head = new node;

    head->data = 20;
    head->link = nullptr;

    cout << head->data << endl;
    delete head;

    return 0;
}