#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void display(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    display(head->next); // Recursive Call
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(15);
    head->next->next = new Node(30);
    head->next->next->next = new Node(23);
    display(head);
    cout << endl;
    display(head);

    return 0;
}