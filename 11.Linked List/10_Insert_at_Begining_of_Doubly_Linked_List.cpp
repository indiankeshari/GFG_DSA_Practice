#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    else
    {
        temp->next = head;
        head->prev = temp;
        return temp;
    }
}

int main()
{
    Node *head = NULL;
    head = insertBegin(head, 10);
    head = insertBegin(head, 20);
    head = insertBegin(head, 30);
    display(head);

    return 0;
}